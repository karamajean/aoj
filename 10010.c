#include <stdio.h>

int main()
{
	int a,b;
	char op;
op:
	while(scanf("%d %c %d",&a,&op,&b)==2);
	{
		switch(op)
		{
			case '+':
				printf("%d\n",a+b);							
				goto op;
				break;

			case '-':
				printf("%d\n",a-b);							
				goto op;
				break;

			case '*':
				printf("%d\n",a*b);			
				goto op;
				break;

			case '/':
				printf("%d\n",a/b);			
				goto op;
				break;

			case '?':
				return 0;

			default:
				break;	
		}
	}
	return 0;

}
