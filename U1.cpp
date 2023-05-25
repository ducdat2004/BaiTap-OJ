#include <bits/stdc++.h>
using namespace std;

int main()
{
	int result[1000];
	int k = 0;
	while(true)
	{
		int a[10000];
		int n = 0;
		string s;
		getline(cin, s);
		if(s.length() == 0)
			break;
		
		int dem2 = 0;
		if(s[0] != ' ')
		{
			for(int i = 0; i < s.length(); i++)
			{
				if(s[i] == ' ')
					break;
				else
					if((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || s[i] == '\'')
						dem2++;
			}
		}	
		a[n] = dem2;
		n ++;
		for(int i = 0; i < s.length(); i++)
		{
			
			if(s[i] == ' ' && s[i+1] != ' ')
			{
				int dem = 0;
				for(int j = i + 1; j < s.length(); j++)
				{
					if(s[j] == ' ')
						break;
					else
                    if((s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z') || s[j] == '\'')
						dem++;
				}
				a[n] = dem;
				n++;
			}
		}	
		int max = a[0];		
		for(int i = 0; i < n; i ++)
		{
			if(max < a[i])
				max = a[i];
		}
		result[k] = max;
		k++;
	}
	for(int i = 0; i < k; i++)
	{
		cout << result[i] << endl;
	}
}