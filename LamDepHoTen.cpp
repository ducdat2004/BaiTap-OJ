#include <iostream>
#include <string>
using namespace std;

main()
{
    while (true)
    {
        string name;
        getline(cin, name);
        if(name.length() == 0) break;
        string result;
        for(int i = 0; i < name.length(); i++)
        {
            if(name[i] == ' ' && name[i+1] != ' ')
            {
                result += name[i];
            }
            else
            {
                if(name[i] != ' ')
                {
                    result += name[i];
                }
            }
        }
        if(result[0] == ' ')
        {
            result.erase(0,1);
        }
        else
        {
            for(int i = 0; result[i] != ' '; i++)
            {
                for(int l = 65; l <= 90; l++)
                {
                    if(result[i] == l)
                    {
                        result[i] += 32;
                    }
                }
                 
            }  
        }
        for(int i = 0; i < result.length(); i++)
        {
            for(int j = 97; j  <= 122; j++)
            {
                
                if(result[i] == ' ' && result[i+1] != ' ')
                {
                    if(result[i + 1] == j)
                    {
                        result[i + 1] -= 32;    
                    }
                    for(int k = i + 2; k < result.length(); k++)
                    {
                        for(int l = 65; l <= 90; l++)
                        {
                            if(result[k] == l)
                            {
                                result[k] += 32;
                            }
                            if(result[k] == ' ')
                                break;
                        }
                    }
                }
                if(result[0] == j)
                {
                    result[0] -= 32;
                }
            }
          
        }
        cout << result << endl;
    }
}