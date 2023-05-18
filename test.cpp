#include <bits/stdc++.h>
using namespace std;
void tich(int n)
{
	n *= 2;
}
void tich2(int &n)
{
	n *= 2;
}
void tich3 (int *x) // x la con tro (pointer) 
{
	(*x) *= 2; // (*x) la toan tu giai tham chieu: dereference {lay gia tri tu dia chi (vi tri) cua bien do'}
	// Lay gia tri cua vi tri ma` con tro dang tro vao`
} 
void swap (int *x, int *y)
{
	int tg;
	tg = *x;
	*x = *y;
	*y = tg;
}
struct SinhVien
{
	string ten, diachi;
	int tuoi;	
};
int main()
{
	int n = 1000, x = 100, y = 200;
	int * ptr = &n;
	tich3(&n);
	cout << n << endl;
	swap(&x, &y);
	cout << x << " " << y;
	SinhVien d;
	d.ten = "Tran Duc Dat";
	d.tuoi = 18;
	d.diachi = "Hue";
	SinhVien *p = &d;
	cout << endl << (*p).ten << " " << p -> diachi << " " <<  p -> tuoi;
	return 0;
}
