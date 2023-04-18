#include <stdio.h>
#include <math.h>
main()
{
	 double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if(a == b && b == c && c == a)
			printf("Tam giac deu");	
	else
	{
		if(a != b && b != c && c != a)
		{
			printf("Tam giac thuong");
		}
		if(a == b || b == c || c == a)
		{
			printf("Tam giac can");
		}
	}
	
}
