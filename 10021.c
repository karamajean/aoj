#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	int i,j;		
	int result;
	char input[20],temp[20],min[20];

	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
		{
			scanf("%s",input);
			if(i==0) strcpy(temp,input);
			result = strcmp(input,temp);
			if(result < 0)
			{
				strcpy(min,input);
				printf("result = %d\n",result);
				printf("%s\n",min);
			}
		}	

					
	}
	return 0;
}
