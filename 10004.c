#include <stdio.h>

int main ()
{
	int a, b, c;

	scanf("%d %d",&a,&b,&c);

	if( a>b && a>c && b>c)
	{
		printf("%d %d %d\n",a,b,c);
	}
	else if( b>a && b>c && a>c )
	{
		printf("%d %d %d\n",a,b,c);
	}
	else if ( c>a && c>b && : )
	{
		printf("a == b\n");
	}
	return 0;

}
