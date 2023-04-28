#include <iostream>

using namespace std;

int main()
{
	int count;
	string dizi[2];
	cin >> dizi[0];
	cin >> dizi[1];
	int k = 0;
	int toplam = 0;
	if(dizi[0].size() == dizi[1].size())
	{
		for (int i = 'a'; i <= 'z'; i++)
		{
			count++;
			for (int j = 0; j < int(dizi[k].size()); j++)
			{
				if (char(i) == dizi[k][j])
				{
					
					toplam = toplam + count;
				}
			}
			cout << count;
			if (k == 0)
			{
				
				k++;
			}
			
		}
	}
	else
	{
		return 0;
	}
	
}
