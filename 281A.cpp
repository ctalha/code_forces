#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	string letter;
	cin >> letter;
	
	if (letter.length() <= 1000)
	{
		letter[0] = toupper(letter[0]);
		cout << letter;
	}
	return 0;
}

