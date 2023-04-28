#include <iostream>
#include<bits/stdc++.h>
using namespace std;
	int index = 0;
int main(){
	string word;
	string otherWord;
	
	cin >> word;
	
	transform(word.begin(), word.end(), word.begin(), ::tolower);
	
	cin >> otherWord;
	
	transform(otherWord.begin(), otherWord.end(), otherWord.begin(), ::tolower);
	
	int counter = 0;
	int length = word.length() - 1;
	//abc
	if(otherWord.length() == word.length()){
		for(int i = 0; i < word.length(); i++){
			if(word[i] == otherWord[length]){
				counter++;
				length--;
			}
		}
		if(counter == word.length()){
			cout << "YES";
		}
		else{
			cout << "NO";
		}
	}
	else{
		cout << "NO";
	}

}
