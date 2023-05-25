#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(getline(cin, s))
	{	
//		if(s.size() == 0) 
//			break;
		string kq;
		for(int i = 0; i < s.length(); i++)
		{
			if(s[i] != ' ' || s[i] == '\t')
			{
				kq += s[i];
			}
			else
			{
				kq += s[i];
				for(int j = i; j < s.length(); j++)
				{
					if(s[j] != ' ')
					{
						i = j - 1;
						break;
					}
				}
			}
		}
		while(kq[0] == ' ')
		{
			kq.erase(0, 1);
		}
		while(kq[kq.length()-1] == ' ')
		{
			kq.erase(kq.length()-1, 1);
		}
		int dem = 0;
//		for(int i = 0; i < kq.length(); i++)
//		{
//			if(((kq[i] < 'a' || kq[i] > 'z') && (kq[i] < 'A' || kq[i] > 'Z')) && kq[i] != ' ' && kq[i] != '\t')
//			{
//				dem++;
//			}
//		}
		
		cout << kq << endl;
		
	}
}
