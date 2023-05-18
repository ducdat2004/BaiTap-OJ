#include <bits/stdc++.h>
using namespace std;
struct s
{
	string kq;	
};
main()
{
	s ar[100000]; 
	int dem = 0, l = 0;
	while(true)
	{
		string s;	
		getline(cin, s);
		if(s.length() == 0)
			break;
		int len = s.length();
		string kq; 
		
		for(int i = 0; i < len; i++)
		{ 
			if(s[i] == ' ' && s[i + 1] != ' ')
			{
				kq += s[i];
			}
			else 
				if(s[i] != ' ')
				{
					kq += s[i];
				}
		}
		if(kq[0] == ' ')
		{
			kq.erase(0, 1);	
		}
		cout << kq << endl; 
		ar[l].kq= kq;
		l++;	
		
	}
//	for(int j = 0; j < l; j++)
//	{
//		cout << ar[j].kq;
//		if(j != l - 1)
//		{
//			cout << endl;
//		}
//	}
}
	
	

