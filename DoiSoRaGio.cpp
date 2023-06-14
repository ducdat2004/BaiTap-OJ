#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int gio = 0, phut = 0, giay = 0, dem = 0;
	for(int i = 1; i <= n; i++)
	{
		if(i == 60)
		{
			phut++;
			n -= 60;
			giay = n;
			i = 1;	
			if(phut == 60)
			{
				gio++;
				phut -= 60;
			}	
		}
	}
	printf("%02d:%02d:%02d", gio, phut, giay);
}
