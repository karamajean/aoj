#include <stdio.h>

int main()
{

    int seq;
    int an,a1,n,d;
    int value[4];
    int i,j,k;

    while (scanf("%d",&seq) == 1 )
    {
        for (i=0; i<seq ; i++)
        {
            scanf("%d %d %d %d",&value[0],&value[1],&value[2],&value[3]);

            if (value[3] - value[2] == value[2] - value[1])
            {
                an = value[3]+(value[3]-value[2]);

                for (j=0; j<4; j++)
                {
                    printf("%d ",value[j]);
                }
                printf("%d\n",an);
            }
            else
            {
                an = ( value[3] / value[2] ) * value[3];
                for (k=0; k<4; k++)
                {
                    printf("%d ",value[k]);
                }
                printf("%d\n",an);
            }
        }
    }
    return 0;
}
