#include <bits/stdc++.h>
using namespace std;
int main()
{
	int hang;
	cin >> hang;
	int cot = 1;
	int a[10000][cot];
	a[0][0] = 1;
	for(int i = 0; i < hang; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			if(a[i-1][0] == 1)
			{
				a[i][0] = 0;
				 
			}	
			else
			{
				if(a[i-1][0] == 0)
				{
					a[i][0] = 1;	
				}
			}	
			if(a[i][j] == 0)
			{
				a[i][j + 1] = 1;
			}	 	
			else
			{
				a[i][j + 1] = 0;	
			}			
		}
		cot++;
	}
	cot = 1;
	for(int i = 0; i < hang; i++)
	{
		for(int j = 0; j < cot; j++)
		{
			cout << a[i][j];
		}
		cot++;
		cout << endl;
	}
}
