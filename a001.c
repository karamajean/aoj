#include <stdio.h>

int main()
{

        char buffer[2000];
         while(scanf("%s", buffer)!=EOF) // 這個比較好
        //while (scanf("%s", buffer)==1) // 引數配對為1
        {
            printf("hello, %s\n", buffer);
        }
        return 0;


}
