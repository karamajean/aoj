#include <stdio.h>
#include <string.h>

int main()
{
	char input[1001];
	int len,i;
	int sum;
	while(scanf("%s",input)==1)
	{		
		if(input[0] == '0' ) return 0;
		len = strlen(input);
		sum=0;

		for(i=0;i<len;i++)
			sum+=input[i]-'0';
		
		
		printf("%d\n",sum);
	}
	return 0;
}
