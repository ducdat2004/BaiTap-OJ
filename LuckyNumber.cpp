#include <iostream>
#include <cmath>
using namespace std;
main()
{
	long long int n;
	cin >> n;
	long long int a[n];
	int kq = 0;
	for(int i = 0 ; i < n; i++)
	{
		int dem1, dem2;
		cin >> a[i];
		int s;	
		for(int j = 0; j <= a[i]; j++)
		{
			int len = log10(j) + 1; 
			while(len != 0)
			{
				int chia = 10;
				if(j % chia == 4)
				{
					dem1++;
				}
				if(j % chia == 7)
				{
					dem2++;
				}
				chia = chia * 10;
			}
		}
		
	}	
	int k = 1;
	
	
}
