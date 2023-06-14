#include <iostream>
using namespace std;
int main()
{
	int sopt;
	cin >> sopt;
	int a[sopt];
	for(int i = 0; i < sopt; i++)
	{
		cin >> a[i];
	}
	int chan = 0, le = 0, duong = 0, am = 0;
	for(int i = 0; i < sopt; i++)
	{
		if(a[i] % 2 == 0)
			chan++;
		if(a[i] % 2 != 0)
			le++;
		if(a[i] >= 0)
			duong++;
		if(a[i] < 0)
			am++;
	}
	cout << am << endl;
	cout << duong << endl;
	cout << chan << endl;
	cout << le << endl;
}
