#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    if(s.length() == 0)
        return 0;
    for(int i = 0; i < s.length(); i++)
    {
        for(int j = 32; j <= 126; j++)
        {
            if((j >= 58 && j <= 64) || (j >= 91 && j <= 96) || (j >= 33 && j <= 47) || (j >= 123 && j <= 126))
            {
                if(s[i] == j)
                {
                    s[i] = ' ';
                } 
            }
        }
    }
    int soTu = 0;   
    if(s[0] != ' ')
    {
        soTu++;
    }
    int arr[100];
    int n = 0, lenTudautien = 0;
    for(int i = 0; i < s.length(); i++)
    {
        
        if(s[i] == ' ' && s[i + 1] != ' ')
        {
            int sotudainhat = 0;
            for(int j = i + 1; j < s.length(); j++)
            {
                if(s[j] != ' ')
                    sotudainhat++;
                else
                    break;
            } 
            // cout << sotudainhat << endl;         
            if(sotudainhat > n)
            {
                n = sotudainhat;
            }
        }
    }
    while (s[0] == ' ')
    {
        s.erase(0, 1);
    }
    if(s[0] != ' ')
            {
                for(int j = 0; j < s.length(); j++)
                {
                    if(s[j] != ' ')
                        lenTudautien++;
                    else
                        break;
                }
            }   
    if(lenTudautien < n)
    {
        cout  << n << endl;
    }    
    else
        cout << lenTudautien << endl;
}