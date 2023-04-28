#include <iostream>
#include <string>
#include <cctype>
#include <cstring>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	string word;
	cin >> word;
	int lowerCount = 0;
	
	for(int i = 0; i < word.length(); i++){
		if(islower(word[i])){
			lowerCount++;	
		}
	}
	int upperCount = word.length() - lowerCount;
	if(upperCount > lowerCount){
		transform(word.begin(), word.end(), word.begin(), ::toupper);
		cout << word;
		return 0;
	}
	else if(upperCount < lowerCount){
		transform(word.begin(), word.end(), word.begin(), ::tolower);
		cout << word;
		return 0;
	}
	else{
		transform(word.begin(), word.end(), word.begin(), ::tolower);
		cout << word;
		return 0;
	}
}
