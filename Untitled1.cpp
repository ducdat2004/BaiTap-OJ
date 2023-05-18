#include <bits/stdc++.h>
#include <cstring>
using namespace std;

int main()
{
	while(true)
	{
		string str;
		getline(cin, str);
		if(str.length() == 0)
			break;
		char arr[100];
		int n = 0;
		int pos = 1;
		char tong;
		cout << tong << endl;
		for(int i = 0; i < str.length(); i++)
		{
			for(int j = 48; j <= 57; j++)
			{
				if(str[i] == j)
				{
					
					tong = str[i];		
				}	
					
			}
		}
		
		cout << tong << endl;
	}
}
