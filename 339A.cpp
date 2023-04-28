#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
		string line,correctline;

	cin >> line;
	
	int k;
	
	if (line.length() <= 100 )
	{
		for (int i = 0; i < line.length(); i++)
		{
			if (line[i] == '1' || line[i] == '2' || line[i] == '3')
			{
				k = i;
				k++;
				if (line[k] == '+')
				{
					correctline = line;
				}
				else
				{
					return 0;
				}
			}
			else
			{
				return 0;
			}
			
		}
		for (int i = 0; i < correctline.length(); i++)
		{
			for (int j = 0; j < correctline.length(); j++)
			{
				if (correctline[j] > )
				{
					_
				}
			}
			
		}
		
		
		
	}
	else
	{
		return 0;
	}
	
	
}
