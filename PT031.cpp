#include <iostream>
using namespace std;

void tamGiacPascal(long long int a[][100], int n)
{
    int l = 1;
    for(int i = 0; i < n; i++)
    {
        a[i][0] = 1;
        for(int j = 1; j < l; j++)
        {
            a[i][j] = a[i-1][j] + a[i-1][j-1];
        }
        l++;
    }
}
void print(long long int a[][100], int n)
{
	int m = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j] << " ";
        }
        m++;
        cout << endl;
    }
}
int main()
{
    long long int a[100][100];
    int n;
    cin >> n;
    tamGiacPascal(a, n);
    print(a, n);
}
