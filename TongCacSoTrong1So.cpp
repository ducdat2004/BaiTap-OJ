#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;
    int tong = 0;
    for(int i = 0; i < n.length(); i++)
    {
        n[i] -= 48;
        tong += n[i];
    }
    cout << tong;
}