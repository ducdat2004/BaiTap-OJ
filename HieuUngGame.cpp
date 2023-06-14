#include <iostream>
using namespace std;
//void s()
int main()
{
	int t;
	cin >> t;
	int arr[100];
	int n = 0;
	for(int i = 0; i < t; i++)
	{
		int l, m1,m2,m3,d;
		cin >> l >> m1 >> m2 >> m3 >> d;
		for(int j = 0; j < d; j++)
		{
			for(int k = 1; k <= l; k++)
			{
				if(m1 == k)
				{
					cout << "k = " << k << " ";
					arr[n] = k-1;
					n++;
					arr[n] = k+1;
					n++;
					m1++;
				}
				if(m2 == k)
				{
					cout << "k = " << k << " ";
					arr[n] = k-1;
					n++;
					arr[n] = k+1;
					n++;
					m2++;
				}
				if(m3 == k)
				{
					cout << "k = " << k << " ";
					arr[n] = k-1;
					n++;
					arr[n] = k+1;
					n++;
					m3++;
				}
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
