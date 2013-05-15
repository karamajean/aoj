#include <stdio.h>

int main()
{
	int m,f,r;
	int result;

	while(1)
	{
		scanf("%d %d %d",&m,&f,&r);
		if( m==-1 && f==-1 && r==-1) break;
		result=m+f;
		
		if( m==-1||f==-1 ) 
		{
			printf("F\n");
			continue;
		}
		if( result>=80 ) 
			printf("A\n");			
		else if( result>=65 && result<80 )
			printf("B\n");
		else if( result>=50 && result<65 )			
			printf("C\n");
		else if( result>=30 && result<50 )			
		{
			if(r>=50)
				printf("C\n");
			else
				printf("D\n");
		}
		else if(result<30)
			printf("F\n");	
	}
	return 0;
}
