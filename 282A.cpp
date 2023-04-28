
	#include <iostream>

	using namespace std;

	int main()
	{
		int n;
		cin >> n;
		string bits;
		string arrayBits[n];
		int x = 0;
		if (1 <= n && n <= 150)
		{
			for (int i = 0; i < n; i++)
			{
				cin >> bits;
				arrayBits[i] = bits; 
			}
		}
		for (int i = 0; i < n; i++)
		{
			if (arrayBits[i][1] == '+')
			{
				x++;
			}
			else
			{
				x--;
			}
		}
		cout << x;
		
	}
