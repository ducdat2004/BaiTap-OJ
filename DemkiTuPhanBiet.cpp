#include <bits/stdc++.h>
using namespace std;

main()
{
	string s;
	getline(cin, s);
	int len = s.length();
	int dem = 0;
	int chay = 91;
	string kq;
	for(int i = 0; i < len; i++)
	{
		int check = 0;
		for(int j = 65; j <= 90; j++)
		{
			if(s[i] == j)
			{
				s[i] += 32;
			}
		}	
	}
	for(int i = 97; i <= 122; i ++)
	{
		for(int j = 0; j < len; j++)
		{
			if(s[j] == i)
			{
				dem++;
				break;
			}
		}
	}
	cout  << dem;
}
