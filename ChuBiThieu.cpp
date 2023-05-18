#include <iostream>
#include <string>
using namespace std;

main()
{
	string s;
	getline(cin, s);
	string result;
	for(int i = 97; i <= 122; i++)
	{
		long int dem = 0;
		for(int j = 0; j < s.length(); j++)
		{		
			if(s[j] == i)
			{
				dem++;
			}	
		}
		if(dem == 0)
		{
			result += i;
		}
	}
	char min = result[0];
	for(int i = 0; i < result.length(); i++)
	{
		if(min > result[i])
		{
			min = result[i];
		}
	}
	cout << min;
}
