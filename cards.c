#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>


int main()
{
    int n;
    int i,k,x;
    int number;
    char mark;
    int cards[4][13]={0};
	/*
    while (1)
    {
        scanf("%d",&n);
        if (n<=52)
        {
            break;
        }
    }
	*/
	scanf("%d",&n);
    for (i=0; i<n; i++)
    {
        scanf("%s %d",&mark,&number);
        if (mark=='S')
        {
            cards[0][number-1]=1;
        }
        else if (mark=='H')
        {
            cards[1][number-1]=1;
        }
        else if (mark=='C')
        {
            cards[2][number-1]=1;
        }
        else if (mark=='D')
        {
            cards[3][number-1]=1;
        }
    }
    for (i=0; i<4; i++)
    {
        for (k=0; k<13; k++)
        {
            if (cards[i][k]==0)
            {
                if (i==0)
                {
                    printf("S %d\n",k+1);
                }
                else if (i==1)
                {
                    printf("H %d\n",k+1);
                }
                else if (i==2)
                {
                    printf("C %d\n",k+1);
                }
                else if (i==3)
                {
                    printf("D %d\n",k+1);
                }
            }
        }
    }
    return 0;
}
