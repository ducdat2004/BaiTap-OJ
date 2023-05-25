#include <stdio.h>
#include <math.h>
main()
{
	double cv,S,a, b, c;
	scanf("%lf %lf %lf", &a,&b,&c);
	cv = (a + b + c) / 2;
	S = sqrt(cv*(cv - a)*(cv - b)* (cv - c));
	if((a == 0 || b == 0 || c == 0) || (a < 0 || b < 0 || c < 0) || (a + b < c || b + c < a || c + a < b) || S == 0)
		printf("No Solution");
	else
		if(S != 0)
			printf("%.6lf", S);
}
