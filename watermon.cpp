#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int line;
	cin >> line;
	int count = 0;
	
	if(line >= 1 && line <= 100)
	{
		string arrayCentes[line];
		string copyCentes;
		
		string arrayNewCentes[line];
		
		for (int i = 0; i < line; i++)
		{
			cin >> copyCentes;
			if(copyCentes.length() >= 1 && copyCentes.length() <= 100)
			{
				arrayCentes[i] = copyCentes;
			}
		}
		for (int i = 0; i < line; i++)
		{
			int loop = arrayCentes[i].length();
			int j = 0;
			while(j < loop)
			{
				arrayCentes[i][j] = tolower(arrayCentes[i][j]);
				j++;
			}
			
		}
	

		while(count < line)
		{
		
				string newCentes;
			
				if(arrayCentes[count].length() > 10)
				{
				
					newCentes = arrayCentes[count][0];
					
					int length = arrayCentes[count].length()-2;
					ostringstream ostr;
					ostr << length;
					newCentes += ostr.str();
					
					newCentes += arrayCentes[count][arrayCentes[count].length()-1];
					
					arrayNewCentes[count] = newCentes;
					
					count++;
				}
				else
				{
					arrayNewCentes[count] = arrayCentes[count];
					count++;
				}	
		}
		
		for (int i = 0; i < line; i++)
		{
			cout << arrayNewCentes[i]+"\n";
		}
	
	}
	
	
}
