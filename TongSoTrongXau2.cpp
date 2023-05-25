#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	float tong = 0;
	int len = s.length();
	for(int i = 0; i < len; i++)
	{
		string so;
		if(s[i] >= '0' && s[i] <= '9')
		{
			for(int j = i; j < len; j++)
			{
				if((s[j] < '0' || s[j] > '9') && s[j] != '.')
				{
					break;
				}	
				else
				{
					so += s[j];
					i = j;
				}
			}
			string n;
			for(int j = 0; j < so.length(); j++)
			{	
				n += so[j];	
			}
			stringstream ss(n);
			float number;
			ss >> number;
			tong += number;	
		}
	}
	cout << tong;
}
