#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;
void nhapMang(int n, int arr[])
{
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i]; 
	}
}
int dem(int n, int arr[])
{
	int count = 0;
	for(int i = 0; i < n; i++)
	{
		float s;
		s = sqrt(arr[i]);
		if(s == (int)s)
			count++;
	}
	return count;
}
int main()
{
	int n;
	int arr[100000];
	cin >> n;
	nhapMang(n, arr);
	cout << dem(n, arr);
}
