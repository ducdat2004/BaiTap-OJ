#include <stdio.h>
typedef struct SV
{
	char HoTen[20];	
}; 
void Nhap (SV a)
{
	scanf("%s", &a.HoTen);
	
}
main()
{
	SV b;
	Nhap(b);
}
