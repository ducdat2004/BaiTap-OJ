#include <bits/stdc++.h>
#include <string>
using namespace std;
int main()
{
	string s;
	string str = "abc12a13";
	for(int i = 0; i < str.length(); i++)
	{
		
	 	for(int j = 48; j <= '9'; j++)
		 {
		 	int tong = 0;
		 	if(str[i] == j)
			{
			 	int k = i;
				while(k < str.length())
				{
					if(isdigit(str[k]) == 0)	
					{
						break;
					}
					else
						tong += str[k];
					k++;
				}			 	
			} 	
			  	
		} 
		
	
	}

	
}
