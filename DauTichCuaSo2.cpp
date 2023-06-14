#include <iostream>
using namespace std;

int main()
{
    long long int a, b;
    cin >> a >> b;
    if (a == 0 && b == 0)
	{
	    cout << "Zero";
	    return 0;
	}
    long long int tich = 1;
    for (long long int i = a; i <= b; i++)
    {
    	if (i == 0) continue;
        tich *= i;
        if (tich == 0)
            break;
    }
    if (tich == 0)
        cout << "Zero";
    else if (tich > 0)
        cout << "Positive";
    else
        cout << "Negative";

    return 0;
}

