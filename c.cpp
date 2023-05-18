#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct sv
{
    string hoten;
    string truong;
    string tt;
    string diem;
};

int main()
{
    int sopt;

    cin >> sopt;

    sv a[sopt];
    cin.ignore();

    for(int i = 0; i < sopt; i++)
    {
        string line;
        getline(cin, line);

        stringstream ss(line);
        getline(ss, a[i].hoten, ',');
        getline(ss, a[i].truong, ',');
        getline(ss, a[i].diem);
		
    }
}
