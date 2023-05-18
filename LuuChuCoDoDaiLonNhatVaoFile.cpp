#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    ofstream file("D:/XAU.TXT");
    if(file.is_open())
    {
        for(int i = 0; i < s.length(); i++)
        {
            for(int j = 32; j <= 122; j++)
            {
                if((j >= 58 && j <= 64) || (j >= 91 && j <= 96) || (j >= 33 && j <= 47))
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
    
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == ' ' && s[i + 1] != ' ')
            {
                soTu++;
                
            }

            
        }
        file << soTu;
        file.close();
    }
    ifstream show("D:/XAU.TXT");
    if(show.is_open())
    {
        string line;
        getline(show, line);
        cout << line;  
    }
}