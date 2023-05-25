#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        double kthp;
        double qtht;
        double diemthi;
        cin >> qtht >> diemthi;
        kthp = qtht * ((double)40/100) + diemthi * ((double)60/100);
        kthp = round(kthp * 10) / 10;
        if(kthp < 4)
        {
            printf("%.1lf F\n", kthp);
        }
        else
            if(kthp >= 4 && kthp <= 5.4)
            {
                printf("%.1lf D\n", kthp); 
            }
        else      
            if(kthp >= 5.5 && kthp <= 6.9)
            {
                printf("%.1lf C\n", kthp);
            }
        else
            if(kthp >= 7 && kthp <= 8.4)
            {
                printf("%.1lf B\n", kthp);
            }
        else
            if(kthp >= 8.5 && kthp <= 10)
            {
                printf("%.1lf A\n", kthp);
            }    
            
         
    }
}