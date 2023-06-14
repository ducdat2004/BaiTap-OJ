#include <iostream>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	long long int count = 0;
	for(long long int i = 0; i < n; i++)
	{
		long long int nam;
		cin >> nam;
		if(nam % 19 == 0 || nam % 19 == 3|| nam % 19 == 6 || nam % 19 == 9 || nam % 19 == 11 || nam % 19 == 14 || nam % 19 == 17)
		{
			count++;
		}
	}
	cout << count;
	return 0;
}
