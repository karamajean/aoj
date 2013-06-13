#include <stdio.h>
#include <stdlib.h>

int main()
{
	int money=100000,debet=0;
	int weeks,i;

	scanf("%d",&weeks);

	for(i=0;i<weeks;i++)
	{
		money = money *1.05;
		if(money%1000>0)
		{		
			debet = money%1000;
			money = money -debet + 1000;
		}			

	}
	printf("%d\n",money);
	return 0;

}
