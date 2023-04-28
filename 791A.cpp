#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
	int limak,bob;
	cin >> limak;
	cin >> bob;
	int year = 0;
	if (limak <= bob && 1 <= limak && 10 >= bob)
	{
		while (limak <= bob)
		{
			year++;
			limak = (limak * 3);
			bob = (bob * 2);
		}
		cout << year;
	}
	else
	{
		return 0;
	}
}





