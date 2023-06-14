#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	long long int result = 1;
	if(n == 0 || n == 1)
	{
		result = 1;
	}
	else
		if(n == -1)
		{
			result = -1;	
		}
	else
	if(n % 2 == 0)
		for(int i = 2; i <= n; i += 2)
		{
			result *= i;
		}			
	else
		if(n % 2 != 0)
			for(int i = 1; i <= n; i += 2)
			{
				result *= i;
			}
		
	cout << result;
} 
