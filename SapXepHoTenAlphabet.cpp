#include <iostream>
#include <string>
using namespace std;

struct s
{
    string name;
    s *next;
};

main()
{
    s a[10000];
    int n = 0;
    string d;
    while(true)
    {
        getline(cin, d);
        if(d.length() == 0) break;
        int demktt = 0;
        string xaudachuanhoa;
        int k = 0;
        for(int i = 0; i < d.length(); i++)
        {
            if(d[i] == ' ' && d[i + 1] != ' ')
            {
                for(int j = 97; j <= 122; j++)
                {
                    if(d[i + 1] == j)
                    {
                        d[i + 1] -= 32;
                    }
                }
                xaudachuanhoa += ' ';
            }
            else
            {
                if(d[i] != ' ')
                    xaudachuanhoa += d[i];
            }
        }
        if(xaudachuanhoa[k] == ' ')
        {        	
            xaudachuanhoa.erase(0, 1);
        }
        while(xaudachuanhoa[xaudachuanhoa.length()-1] == ' ')// xoa ki tu trang thua cuoi cung neu co
        {
        	
	        	xaudachuanhoa.erase(xaudachuanhoa.length() - 1, 1); 
			
		}
        for(int j = 97; j <= 122; j++)
    	{
			if(xaudachuanhoa[0] == j)
			{
				xaudachuanhoa[0] -= 32;	
			}	
		}
//        cout << xaudachuanhoa << xaudachuanhoa.length() <<  endl;
        int index = 0; // Lay vi tri ki tu trang cuoi cung 
        int soktt = 0; // Dem co bao nhieu ki tu trang 
        int checkktt = 0; // Chay den khi nao bang soktt thi dung lai 
        for(int i = 0; i < xaudachuanhoa.length(); i++)
        {
            if(xaudachuanhoa[i] == ' ')
                soktt++;
        }
        int sokitu = 0; // lay so ki tu tu 0 den ki tu ' ' cuoi cung
        for(int i = 0; i < xaudachuanhoa.length(); i++)
        {
            if(xaudachuanhoa[i] == ' ')
            {
                checkktt++;
                if(checkktt == soktt)
                {
                    index = i; // gan i cho index la vi tri cua ki tu trang cuoi cung
                }
            }
            // if(index == 0)
            //     sokitu++;
            // else
            //     break;
        }
        string result;
        for(int i = index + 1; i < xaudachuanhoa.length(); i++)
        {
            for(int j = 97; j <= 122; j++)
            {
                if(xaudachuanhoa[i] == j)
                    xaudachuanhoa[i] -= 32;
            }
            result += xaudachuanhoa[i];
            sokitu++;
        }
		result += ' ';
        
        xaudachuanhoa.erase(index + 1, sokitu);
        result += xaudachuanhoa;
        
        if(d == "***") break;
        a[n].name = result;
        n++;
    }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(a[i].name > a[j].name)
            {
                string temp = a[i].name;
                a[i].name = a[j].name;
                a[j].name = temp;
            }
        }
    }
    for(int i = 0; i < n ; i++)
    {
        cout << a[i].name << endl;
    }
}
