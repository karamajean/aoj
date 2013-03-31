#include <stdio.h>

int main()
{
	double r;

	double area,circle;
	

	scanf("%lf",&r);

	area = r*r*3.14159265358979323846264338327950288419716939937510582097494;
	circle = 2*r*3.14159265358979323846264338327950288419716939937510582097494;
	

	printf("%f %f\n",area,circle);
	return 0;
}
