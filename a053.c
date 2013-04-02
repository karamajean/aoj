#include <stdio.h>

int main()
{

    int grade=0;
    int result;

    while (scanf("%d",&grade)==1)
    {
        result = 0;

        if ( grade >= 40 )	result = 100;
        if ( grade == 0 )	result = 0;
        if (grade >= 31 && grade < 40 )
        {
            result += (grade%10)*1;
            grade -= (grade%10);
        }

        if (grade == 30 )
        {
            result += 90;
            grade = 0;
        }

        if (grade >= 21 && grade < 30 )
        {
            result += (grade%10)*1;
            grade -= (grade%10);
        }

        if (grade == 20 )
        {
            result += 80;
            grade = 0;
        }

        if (grade >= 11 && grade < 20 )
        {
            result += (grade%10)*2;
            grade /= 10;
			printf("grade= %d, result=%d\n",grade,result);
        }

        if (grade > 0 && grade <= 10 )
        {
            result += (grade*60) ;
			printf("grade= %d, result=%d\n",grade,result);
        }
        printf("%d\n",result);
    }
    return 0;
}
