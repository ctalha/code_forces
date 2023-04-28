#include <iostream>
using namespace std;
int main(){
	int width_of_road = 0;
	int number_of_friends;
	int fence_of_height;
	int height_of_person[number_of_friends];
	cin >> number_of_friends;
	cin >> fence_of_height;
	
	for(int i = 0; i < number_of_friends; i++){
		cin >> height_of_person[i];
	}
	
	for(int i = 0; i < number_of_friends; i++){
		cout << fence_of_height +" - "+ height_of_person[i];
		if(fence_of_height >= height_of_person[i]){
			width_of_road++;
		}
		else{
			width_of_road += 2;
		}
	}
	cout << width_of_road;

}
