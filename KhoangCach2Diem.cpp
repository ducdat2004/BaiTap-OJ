#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long long int x1,y1,x2,y2;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	double kq;
	kq = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));
	printf("%.9lf", kq);
}
