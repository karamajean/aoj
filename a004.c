#include <stdio.h>

int main()
{

	int year;
	int result;
	
    while (scanf("%d",&year)==1) 
    {
		if( year%4 == 0 && year%100 !=0 )
	    	printf("閏年\n");
		else if(year%400 == 0)
			printf("閏年\n");
		else
			printf("平年\n");
	}    
		

    return 0;


}
