#include <bits/stdc++.h>
using namespace std;
struct HS
{
	string name;
};
int strcmppp(string a, string b)
{
	int result = a.compare(b);
	return result;
}
int main()
{
	string a;
	string b;
	getline(cin, a);
	getline(cin, b);
	cout << strcmppp(a, b) << endl;
	int n;
	cout << "Nhap so hoc sinh: ";
	cin >> n;
	cin.ignore();
	HS as[n];
	for(int i = 0; i < n; i++)
	{
		getline(cin, as[i].name);
	}
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(strcmppp(as[i].name, as[j].name) > 0)
			{
				string temp;
				temp = as[i].name;
				as[i].name = as[j].name;
				as[j].name = temp;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		cout << as[i].name << endl;
	}
	return 0;
}
