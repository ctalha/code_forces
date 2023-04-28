#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int m,n;
	cin >> m;
	cin >> n;
	int temp2;
	if(m < n)
	{
		m = m;
		n = n;
	}
	else
	{
		temp2 = m;
		m = n;
		n = temp2;
	}
	int total = 0,temp,multi = 0;
	if(m <= n && 1 <= m && n <= 16)
	{
		if(m == 1 && n == 1)
		{
			cout << 0;
			return 0;
		}
		int x = m + n;
		if(x == 3)
		{
			cout << 1;
			return 0;
		}

			while(n != 0 && m != 0)
			{
				if(m == n && m % 2 == 0)
				{
					int nx,mx;
					nx = n / 1;  
					mx = m / 2;
					multi = nx * mx;
					total = total + multi;
					cout << total;
					return 0;

				}
				
				if(m == n && m % 2 != 0)
				{
					int nx,mx;
					nx = n / 1;  
					mx = m / 2;
					multi = nx * mx;
					total = total + multi;
					total = total + mx;
					cout << total;
					return 0;
	
				}

				if(n == 1 || m == 1)
				{
					temp = m;
					m = n;
					n = temp;
				}
				
					int nx,mx;
					nx = n / 1;  
					mx = m / 2;
					multi = nx * mx;
					total = total + multi;
					n = n % 1;
					m = m % 2;
					
				
			}
			cout << total;
	}else{return 0;}
}
