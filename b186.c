#include <stdio.h>

int main()
{
	unsigned int cookie,Cookie;
	unsigned int cake,Cake;
	unsigned int chocolate,Chocolate;
	unsigned int gift = 0 ;
    while (scanf("%d %d %d",&cookie, &chocolate, &cake )==3) 
    {
		Cookie = cookie;
		Cake = cake;
	
		/*while( cookie >= 10 && cake >= 2  )
		{
			chocolate +=1;

			cookie -= 10;
			cake -= 2;		
		}
		*/
		cookie /= 10;
		cake /= 2;
		printf("cookie = %d, cake = %d\n",cookie,cake);

		if(cookie < cake)
			chocolate += cookie;
		else
			chocolate += cake;

		printf("%d 個餅乾，%d 盒巧克力，%d 個蛋糕。\n",Cookie, chocolate , Cake);
	}    
    return 0;
}
