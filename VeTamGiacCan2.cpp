#include <iostream>
using namespace std;
struct h 
{
	char tg[10000][10000];
};
int main()
{
	h as[10000];
	int n = 0;
    int t;
    cin >> t; 
    for(int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        char a[10000][10000];
        int hang = (n * 2) - 1;
        int cot = 1;
        int dem = 0;
        for(int j = 0; j < hang; j++)
        {
            for(int k = 0; k < cot; k++)
            {
                a[j][k] = '*';
                if (k == n - 1)
                {
                    dem++;
                }
                //cout << a[j][k];
            }
            if (dem == 0)
                cot++;
            else
                cot--;
            //cout << endl;
        }
}  
