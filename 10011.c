#include <stdio.h>

int main()
{
	int i , d;
	int number[100];

	scanf("%d",&d);

	for(i=0; i<d; i++)
		scanf("%d",&number[i]);
	
	for(--d ;d > 0 ;d-- )
		printf("%d ",number[d]);
	printf("%d\n",number[d]);

	return 0;		
}
