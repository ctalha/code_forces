#include <iostream>
#include <string>

using namespace std;

int main(){
	int n,i;
	string queue;
	
	cin >> n;
	cin >> i;
	cin >> queue;
	if(queue.length() == n){
		int time = 1;
		//BGGBG
		while(time <= i){
			int j = 0;
			while(j < queue.length()){
				if(queue[j] == 'B'){
					
					if(queue[j+1] == 'B'){
						j = j + 2;
						cout << j;
					}
					else
					{
						cout << j;
						
						if(j != queue.length()-1){//4
							char temp;
							temp = queue[j+1];
							queue[j+1] = queue[j];
							queue[j] = temp;
							j = j + 2;
							cout << queue+"\n";
						}
						else{
							break;
						}	
					}
				}	
				j++;
			}
			time++;
		}
		cout << queue;
		return 0;
	}
}
