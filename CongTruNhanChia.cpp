#include <iostream>
using namespace std;
int main()
{
	long long int a, b;
	cin >> a;
	cin >> b;
	long long int tong, hieu, tich;
	tong = a + b;
	hieu = a - b;
	tich = a * b;
	cout << a << " + " << b << " = "<< tong << endl;
	cout << a << " - " << b << " = "<< hieu << endl;
	cout << a << " * " << b << " = "<< tich;
}
