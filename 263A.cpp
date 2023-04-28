#include <iostream>

using namespace std;

int main()
{
	int matrix[5][5];
	int row;
	int column;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> matrix[i][j];
		}
		
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if(matrix[i][j] == 1)
			{
				row = i;
				column = j;
			}
		}	
	}
	int temp = abs((row+1) - 3);
	temp = temp + abs((column+1) - 3);
	cout << temp;

	
}
