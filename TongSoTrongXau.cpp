#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    int len = s.length();
    if(len == 0)
    	return 0;
    float tong = 0;
    for(int i = 0; i < len; i++)
    {
        if(s[i] == ' ' && s[i + 1] != ' ')
        {
            for(int j = i + 1; j < len; j++)
            {
            	if(s[j] == ' ') 
					break;
            	else
				if(s[j] < 48 || s[j] > 57)	
				{
					s[j] = ' '; // chuyen cac ky tu khac ky tu so thanh ki tu ' '
				}
			}		
        }
    }
    if(s[0] != ' ')
	{
		for(int j = 0; j < len; j++)
		{
			if(s[j] == ' ')
				break;
			else
			{
				if(s[j] < 48 || s[j] > 57)
				{
					if(s[j] != '.')
						s[j] = ' ';
				}	
			}	
		}
	}
	if(s[0] >= 48 && s[0] <= 57)
	{
		string si;
		for(int i = 0; i < len; i++)
		{
			if(s[i] == ' ')
				break;
			else
			{
				if((s[i] >= 48 && s[i] <= 57) || s[i] == '.')
				{
					si += s[i];
				}
			}
		}
		stringstream ss(si);
		float number;
		ss >> number;
		tong += number;
	}
    for(int i = 0; i < len; i++)
    {	
    	if(s[i] == ' ' && s[i + 1] != ' ')
    	{
    		string so1;
    		for(int j = i + 1; j < len; j++)
    		{
    			if(s[j] == ' ')
    				break;
    			else
    				so1 += s[j];
			}
			stringstream ss(so1);
			float number;
			if(so1.length() > 0)
			{
				ss >> number;
				tong += number;	
			}	
		}
	}	
	cout << tong;	
}
