#include <iostream>
using namespace std;
void Nhap(int a[][2], int n)
{
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			scanf("%d", &a[i][j]);	
		}	
	}
}
void Xuat(int a[][2], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			printf("%d", a[i][j]);
		}
		printf("\n");
	}
}
int TT(int a[][2], int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			if(a[i][j] >= 0)
			{
				a[i][j] = a[i][j] - 2;	
				a[i][j + 1] = a[i][j + 1] - 1;
			}
		}
	}
	
}
main()
{
	int n;
	cin >> n;
	int a[n][2];
	Nhap(a, n);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			if(a[i][j] >= 0)
			{
				a[i][j] = a[i][j] - 2;	
				j++;
				a[i][j] = a[i][j] - 1;
				break;
			}
			
		}
	}
	Xuat(a, n);
} 	
