#include <iostream>
using namespace std;
struct s
{
	string str;
};
int main()
{
	
	int t;
	cin >> t;
	s kq[t];
	for(int p = 0; p < t; p++)
	{
		long long int n;
		cin >> n;
		string a = "";
		long long int cot = 0;
		long long int hang = n * 2 - 1;
		long long int lap1 = hang / 2 + 1; 
		string j = "*";
		for(long long int i = 0; i < lap1; i++)
		{
			a += j;
			j += '*';
			a += '\n';
		}
		string k = j.erase(0, 2);
		for(long long int i = 0; i < hang - lap1; i++)
		{
			a += k;
			a += '\n';
			k = k.erase(0, 1);
		}
		kq[p].str = a;
	}
	for(int i = 0; i < t; i++)
	{
		cout << kq[i].str;
	}
}
