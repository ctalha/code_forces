#include <iostream>

using namespace std;

int main()
{
	int x, step = 0;
	cin >> x;
	if(x <= 5){
		cout << 1;
	}
	else{
		while(x > 5){
			x = x - 5;
			step++;
		}
		step++;
		cout << step;
	}
}
