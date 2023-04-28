#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int line;
	cin >> line;
	int arrayAnswer[line][3];
	int count = 0;
	if(line >= 1 && line <= 1000)
	{

		for (int i = 0; i < line; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				int answer = -3;
				cin >> answer;
				if(answer == 0 || answer == 1)
				{
					arrayAnswer[i][j] = answer;
				}
				else
				{
					return 0;
				}
			}
			
		}

		for (int i = 0; i < line; i++)
		{
			int total = 0;
			for (int j = 0; j < 3; j++)
			{
				
				total += arrayAnswer[i][j];
				if (total >= 2)
				{
					count++;
					break;
				}
			}
			
		}
		cout << count;
	}
	
}
