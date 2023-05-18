#include <bits/stdc++.h> 
using namespace std;

main()
{
	char s[200000];

	char result[20000];
	int n = 0;
	for(int i = 97; i <= 122; i++)
	{
		int dem = 0;
		for(int j = 0; j < strlen(s); j++)
		{		
			if(s[j] == i)
			{
				dem++;
			}	
		}
		if(dem == 0)
		{
			result[n] += i;
			n++;
			result[n] = '\0';
		}
	}
	char min = result[0];
	for(int i = 0; i < strlen(result); i++)
	{
		if(min > result[i])
		{
			min = result[i];
		}
	}
	cout << min;
}
