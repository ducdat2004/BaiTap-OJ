#include <iostream>
using namespace std;

int main()
{
	long long x, y;
	cin >> x;
	cin >> y;
	
	if(x == 0 && y == 0)
	{
		printf("The coordinate point (%d, %d) lies at the origin.", x,y);
	}
	else
		if(x >= 0 && y > 0)
		{
			printf("The coordinate point (%lld, %lld) lies in the I quandrant.", x, y);
		}
	else
		if(x > 0 && y >= 0)
		{
			printf("The coordinate point (%lld, %lld) lies in the I quandrant.", x, y);
		}
	else
	
		if(x < 0 && y >= 0)
		{
			printf("The coordinate point (%lld, %lld) lies in the II quandrant.", x, y);
		}
	else		
		if(x < 0 && y < 0)
		{
			printf("The coordinate point (%lld, %lld) lies in the III quandrant.", x, y);
		}	
	else
		if(x >= 0 && y < 0)
		{
			printf("The coordinate point (%lld, %lld) lies in the IV quandrant.", x, y);
		}							
}
