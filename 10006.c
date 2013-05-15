#include <stdio.h>

int main()
{
	int x;
	int i=0;

	while( scanf("%d",&x) ==1 )
	{
		if(x==0) return 0;

		printf("Case %d: %d\n",++i,x);
			
	}
	return 0;

}
