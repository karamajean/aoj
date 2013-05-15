#include <stdio.h>

int main()
{
	int h,w;
	int i,j;

	while(1)
	{			
		scanf("%d %d",&h,&w);

		if(h==0&&w==0) break;

		for(i=1;i<h+1;i++)
		{	
			for(j=1;j<w+1;j++)
			{
				if(i%2!=0)
				{
					if(j%2!=0) 				
						printf("#");
					else
						printf(".");

				}
				else if(i%2==0)
				{
					if(j%2==0) 				
						printf("#");
					else
						printf(".");
				}	
			}		
			printf("\n");
		}
		printf("\n");
	}
	return 0;

}
