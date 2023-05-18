#include <bits/stdc++.h>
#include <string>
using namespace std;

struct sv
{
	string hoten;
	string truong;
	string tt;
	string diem;
};

int main()
{
	int sopt;
	cin >> sopt;
	sv a[sopt];
	for(int i = 0; i < sopt; i++)
	{
		string tt;
		cin.ignore();
		getline(cin, tt);
		int dem = tt.find(',');
		a[i].hoten = tt.substr(0, dem);	
		tt.erase(dem, 1);
		int dem2 = tt.find(',');
		a[i].truong = tt.substr(dem, dem2);
		a[i].diem = tt.substr(dem2 + 1);
	}
	for(int i = 0; i < sopt - 1; i++)
	{
		int s = atoi(a[i].diem);
		if(a[i].diem >= 56)
		{
			cout << a[i].hoten << ",";
			cout << a[i].truong << ",";
			cout << a[i].diem;
			cout << endl;
		}
	}
}
