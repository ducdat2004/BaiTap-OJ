#include <iostream>
using namespace std;
int main()
{
	long long int a, b, c, d;
	cin >> a >> b >> c >> d;
	long long int tich;
	tich = (a * b * c * d) % 100;
	cout << tich;
}
