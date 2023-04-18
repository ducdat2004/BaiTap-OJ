#include <stdio.h>
#include <math.h>
main()
{
	double a, b, c, kq, sinn;
	scanf("%lf %lf %lf", &a, &b, &c);
	sinn = sin(c * (3.14159 / 180));
	kq = 0.5 * a * b * sinn;
	printf("%.4lf", kq);
}
