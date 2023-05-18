#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;

struct sv
{
    string hoten;
    string truong;
    string tt;
    int diem;
};

// Hàm so sánh tên tru?ng và di?m gi?m d?n
bool SS(const sv& a, const sv& b)
{
    // S?p x?p tang d?n theo tên tru?ng
    if (a.truong != b.truong)
        return a.truong < b.truong;
    
    // N?u tru?ng trùng nhau, s?p x?p gi?m d?n theo di?m
    return a.diem > b.diem;
}

int main()
{
    int sopt;
    cin >> sopt;
    cin.ignore();

    sv* a = new sv[sopt];
    for (int i = 0; i < sopt; i++)
    {
        string svInfo;
        getline(cin, svInfo);
        stringstream ss(svInfo);
        
        getline(ss, a[i].hoten, ',');
        getline(ss, a[i].truong, ',');
        ss >> a[i].diem;
    }

  
    sort(a, a + sopt, SS);

  
    for (int i = 0; i < sopt; i++)
    {
        cout << a[i].hoten << ",";
        cout << a[i].truong << ",";
        cout << a[i].diem << endl;
    }

    delete[] a;

    return 0;
}

