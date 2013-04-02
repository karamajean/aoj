#include <stdio.h>

int main()
{

	int m;
	int d;
	int s;
    while (scanf("%d %d",&m, &d )==2) 
    {
		s = (m*2+d)%3;
		if(s==0) printf("?桅n");
		if(s==1) printf("?n");
		if(s==2) printf("憭批?\n");
		if(s==3)
		{ 
		  printf("screen\n",);
		
		}
	}    
		

    return 0;


}
