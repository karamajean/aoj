#include <stdio.h>

int main()
{
	int a, b;
	int d, r;
	double f;

	scanf("%d %d",&a,&b);

	d = a/b;
	r = a%b;
	f = 1.0*a/b;


	printf("%d %d %f\n",d,r,f);

	return 0;


}
