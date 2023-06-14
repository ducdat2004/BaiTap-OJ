#include <iostream>
using namespace std;
int main()
{
	long long int a; //= int(input())
	long long int b; //= int(input())
	cin >> a >> b;
	long long int j = 1;
	long long int tich = 1;
	long long int kq;
	if(a + j >= -1)
	{
		kq = a * (a + j) *  b;
	}
	else
	{
		while (a + j < b)
		{
			tich = tich * (a + j);
		    j+=1;
		}    
		kq = a * tich * b;
	}
	if (kq > 0)
	{
		printf("Positive");
	}
	else
	{
		if (kq < 0)
	    	printf("Negative");
		else
	    	printf("Zero");
	} 	
}

