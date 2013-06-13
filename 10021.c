#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	int i,j;		
	int result;
	char input[20],temp[20];

	scanf("%d",&n);	
	scanf("%s",temp);

	for(i=0;i<n-1;i++)
	{
		scanf("%s",input);
		result = strcmp(temp,input);
		if(result > 0)		
			strcpy(temp,input);		
	}							
	printf("%s\n",temp);
	
	return 0;
}
