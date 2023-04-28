#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
	
	
		int k,n,w;
	cin >> k;
	cin >> n;
	cin >> w;
	int total = 0;
	for (int i = 1; i <= w ; i++)
	{
		total = total + (i*k);
	}
	if (total > n)
	{
		cout << abs(total-n)+"aab";
		cout << "aaaaaa";
	}
	else
	{
		cout << 0+"aa" ;
		cout << "aaaaaab";
		
	
	
}




