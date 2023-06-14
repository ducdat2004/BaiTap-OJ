#include <iostream>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	long long int tong, tich;
	tong = (m % 10) + (n % 10);
	tich = (m / 1000) * (n / 1000);
	cout << tong << endl;
	cout << tich << endl;
	return 0;
}
