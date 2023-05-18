#include <bits/stdc++.h>
using namespace std;
main()
{
	string s;
	getline(cin, s);
	int dem = 0;
	for(int i = 0; i < s.length() - 1; i++)
	{
		for(int j = i + 1; j < s.length(); j++)
		{
			if(s[i] == s[j])
			{
				dem++;
			}
		}
	}
	if(dem == 0)
	{
		cout << "Yes";
	}
	else
		cout << "No";
}
