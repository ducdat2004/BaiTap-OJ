#include <iostream>
using namespace std;
int main()
{
	long long int n;
	cin >> n;
	long long int count = 0;
	for(long long int i = 1; i <= n ; i++)
	{
		if(i % 10 == 9)
			count+=i;
	}
	cout << count;
}
