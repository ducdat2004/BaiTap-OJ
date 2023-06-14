#include <iostream>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	long int dem = 0;
	for(int i = 1; i <= n; i++)
	{
		if(i % 3 == 0)
		{
			dem++;
		}
	}
	cout << dem;
}
