#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
	string a;
	cin >> a;
	int s;
	for(int i = 0; i < a.length(); i++)
	{
		s += a[i];
	}
	cout << s;
}
