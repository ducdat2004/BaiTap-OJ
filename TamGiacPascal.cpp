#include <stdio.h>
main()
{
	int n, c = 0;
	scanf("%d", &n);
	int a[n][c];
	for(int i = 0; i < 5; i++)
	{
		a[i][c] = 1;
		for(int j = 0; j < c; j++)
		{	
			int k = c;		 
			if(j != c)
			{
				a[i][j] = a[i - 1][j] + a[i - 1][j + 1];
			}
			printf("%d ", a[i][j]);
			
		}
		a[i][c] = 1;
		
		printf("%d ", a[i][c]);
		c++;
		printf("\n");
	}
	printf("\n%d", c);
//	for(int i = 0; i < 5; i++)
//	{
//	
//		for(int j = 0; j < c; j++)
//		{
//			pr	
//		}
//	}
}
