#include <iostream>
using namespace std;
bool checkSoNT(int n)
{
	if (n < 2)
        return false;
    int count = 0;
    for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
            count += 1;
	} 
    if (count == 2)
        return true;
    else
    	return false;
}
int giaThiet(int n)
{
	int count = 0;
	 for (int i = 2; i <= n; i++)
	 {
	 	if (checkSoNT(i))
	 	{
	 		//cout << i << endl;
	 		for (int j = 2; j <= n; j++)
		    {
		    	if (checkSoNT(j))
		        {
		        	for (int o = j+1; o <= n; o++) //o in range(j+1, n+1):
		            {
		            	int tong = 0;
	                    if (checkSoNT(o))
	                    {
							tong = j + o + 1;
	                        int dem = 0;
	                        for (int l = j+1; l < o; l++) //l in range(j+1, o):
	                            if (checkSoNT(l))
	                                dem+=1;
	                        if (tong == i && dem == 0)
	                        {
	                        	//cout << checkSoNT(tong) << endl;
	                        	count +=1;
	                        	//cout << j << "+" <<  o <<  "=" <<  tong <<  "i =" << i << endl;
							}    
						}    
					}       
				}       
		    } 
		}
		 	      
	}        
    return count;
}
int main()
{
	int t; 
	cin >> t; //= int(input())
	for(int i = 0; i < t; i++)
	{
		int n; // = int(input())
	    cin >> n;
		int k; 
		cin >> k; // = int(input())
	    if (giaThiet(n) >= k)
	        printf("YES\n");
	    else
	        printf("NO\n");
	}	        
}     
