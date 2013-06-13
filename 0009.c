#include <stdio.h>
#include "debug.h"

int main()
{
	int i,j, no,primer=0,n;
	unsigned long counter =0;
	scanf("%d",&n);

	for(no=2 ;no<=n;no++)
	{
		for(i=2;i<no;i++)
		{
		//	counter++;
			if(no%i==0)
			break;		
		}
		if(no ==i)
		{
			primer++;
//			printf("%d\n",no);	
		}			
	}
//	printf("times :%lu\n",counter);
	printf("%d\n",primer);
	return 0;
}
