#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int number;
	string event;
	
	cin >> number;
	cin >> event;
	
	transform(event.begin(), event.end(), event.begin(), ::toupper);
	
	int count_a = 0;
	int count_d = 0;
	
	for(int i = 0; i < event.length(); i++){
		if(event[i] == 'A'){
			count_a++;
		}
		else{
			count_d++;
		}
	}
	
	if(count_a > count_d){
		cout << "Anton";
	}
	else if(count_a < count_d){
		cout << "Danik";
	}
	else{
		cout << "Friendship";
	}
}
