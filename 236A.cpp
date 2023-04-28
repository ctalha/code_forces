#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main()
{
	string name;
	cin >> name;
	int count = 0;
	
	int size = (int)name.length();
	sort(name.begin(),name.end());
	/*for (int i = 0; i < size; i++)
	{
		cout << name[i];
	}*/
	
		for (int i = 0; i < size; i++)
		{
				if (name[i] != name[i+1])
				{
					count++;
				}
			
			
		}

		if (count % 2 == 0)
		{
			cout << "CHAT WITH HER!";
		}
		else
		{
			cout << "IGNORE HIM!";
		}

	return 0;

}



