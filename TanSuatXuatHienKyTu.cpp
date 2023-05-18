#include <bits/stdc++.h>
using namespace std;

void sort(string &s)
{
	for(int i = 0; i < s.length() - 1; i++)
	{
		for(int j = i + 1; j < s.length(); j++)
		{
			if(s[i] > s[j])
			{
				char temp;
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;		
			}
		}
	}
 } 
main()
{
	string s;
	getline(cin, s);
	sort(s);
//	int kitudb1 = 58, kitudb1 = 91;
	for(int i = 0; i < s.length(); i++)
	{
		int dem = 0;
		for(int j = 0; j < s.length(); j++)
		{
			if(s[i] == s[j])
			{
				dem++;
			}
		} 
		if(s[i] != s[i + 1] && ((s[i] >= 48 && s[i] <= 122)))
		{
			if((s[i] >= 58 && s[i] <= 64) || (s[i] >= 91 && s[i] <= 96))
			{
				continue;
			}
			else
				printf("%c%4d\n", s[i], dem);		
		}	
	} 						
}	
	

