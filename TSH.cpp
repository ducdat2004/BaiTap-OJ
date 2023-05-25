#include <bits/stdc++.h>
using namespace std;

int main()
{
    string date;
    getline(cin, date);
    string dachuanhoa;
    for(int i = 0; i < date.length(); i++)
    {
        if(date[i] != ' ')
        {
            dachuanhoa += date[i];
        }
    }
    int sum = 0;
    for(int i = 0; i < dachuanhoa.length(); i++)
    {
        if(dachuanhoa[i] != '/')
        {
            sum += (dachuanhoa[i] - 48);
        }
    }
    if(sum < 100)
    {
        stringstream ss;
        ss << sum;
        string lk = ss.str();
        int kq = 0;
        for(int i = 0; i < lk.length(); i++)
        {
            kq += (lk[i] - 48);
        }
        while (kq < 2 && kq > 11)
        {
            if(kq < 2)
            {
                kq = kq - kq;
            }
            else
            {
                if(kq > 11)
                {
                    kq -= kq;
                }
            }
        }
        
        
        cout << dachuanhoa << " " << kq;
    }
}