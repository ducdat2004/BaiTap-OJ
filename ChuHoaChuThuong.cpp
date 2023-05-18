#include<bits/stdc++.h>
using namespace std;

main()
{
	
	
 	//a = "as";
 	while(true)
 	{
 		string a ;
 		int thuong = 0;
		int hoa = 0;
 		getline(cin, a);
 		if(a.size() == 0)
 			break;
		 for(int i = 0; i < a.length(); i++)
		{
			for(int j = 65; j <= 90; j++)
			{
				if(a[i] == j)
				{
					hoa++;
				}
				
			}
			for(int k = 97; k <= 122; k++)
			{
				if(a[i] == k)
				{
					thuong++;
				}
			}
		}
		if(hoa > thuong)
		{
			for(int i = 0; i < a.length(); i++)
			{
				for(int j = 97; j <= 122; j++)
				{
					if(a[i] == j)
						a[i] -= 32;	
				}			
			}
		}
		else
		{
			for(int i = 0; i < a.length(); i++)
			{
				for(int j = 65; j <= 90; j++)
				{
					if(a[i] == j)
					{
						a[i] += 32;		
					}		
				}
			}
		}
		cout << a << endl;		
	 }	
}
