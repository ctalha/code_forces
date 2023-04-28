#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{

	int size;
	string color;
	cin >> size;
	int count = 0;
	if (size >= 1 && size <= 50)
	{
		cin >> color;
		if (size == (int)color.length())
		{
			for (int i = 1; i <= (int)color.length(); i++)
			{
				if (color[i-1] == color[i])
				{
					count++;
				}
			}
			
		}
		cout << count;
	}
	return 0;
