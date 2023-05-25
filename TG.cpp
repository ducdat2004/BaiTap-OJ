#include <stdio.h>
main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    if (x >=0 && y > 0)
    {
	    printf("The coordinate point (%d, %d) lies in the I quandrant.", x, y); 
    }
//    else 
//    	if(x > 0 && y >= 0)
//    		printf("The coordinate point (%d, %d) lies in the I quandrant.", x, y);
//    if(x == 0 && y == 0)
//   	{
//     	printf("The coordinate point (%d, %d) lies at the origin.", x,y);
//   	}
//    
//    if  (x < 0 && y < 0)
//    {
//        printf("The coordinate point (%d,%d) lies outside the III quandrant.", x, y);
//    }
//    if (x < 0 && y >= 0)
//    {
//        printf("The coordinate point (%d,%d) lies outside the II quandrant.", x, y);
//    }
//    if (x >= 0 && y < 0)
//        printf("The coordinate point (%d,%d) lies outside the IV quandrant.", x, y);
    
}
