#include <stdio.h>
#include <stdlib.h>

int main()
{
	//0:S 1:H 2:C 3:D
	int cards[4][13]={0};		
	int i,j,number,n;
	char suit;	

	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",&suit,&number);	
		if(suit=='S') 
		{
			cards[0][number-1]=1;			
		}
		else if(suit=='H')
		{
			cards[1][number-1]=1;
		}
		else if(suit=='C') 
		{
			cards[2][number-1]=1;
		}
		else if(suit=='D') 
		{
			cards[3][number-1]=1;
		}		
	}

	for(i=0;i<4;i++)
	{
		for(j=0;j<13;j++)
		{
			if( i==0 && cards[i][j]==0) printf("S %d\n",j+1);
			if( i==1 && cards[i][j]==0) printf("H %d\n",j+1);
			if( i==2 && cards[i][j]==0) printf("C %d\n",j+1);
			if( i==3 && cards[i][j]==0) printf("D %d\n",j+1);
		}
	}		
	return 0;
}
