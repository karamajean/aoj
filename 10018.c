#include <stdio.h>
#include <string.h>

int main()
{
	char str[2048];
	int len,i;

	scanf("%[^\n]",str);
    len = strlen(str);	

	for(i=0;i<len;i++)
	{
		if(str[i]>64&& str[i]<91) 
			str[i]+=32;
		else if(str[i]>96&& str[i]<123) 
			str[i]-=32;					
		printf("%c",str[i]);
	}
	printf("\n");


	return 0;
}
