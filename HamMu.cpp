#include <stdio.h>
#include <math.h>
main()
{
	int n, kq;
	scanf("%d", &n);
	kq = (int)pow(2, n) % 1000000007;
	printf("%d", kq);
}
