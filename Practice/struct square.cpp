#include <stdio.h>

struct square{
	float a;
	float b;
} p;

int main()
{
	float cir, area;
	scanf("%f %f", &p.a, &p.b);
	
	cir=2*(p.a+p.b);
	area=(p.a)*(p.b);
	
	printf("%.3f %.3f", cir, area);
	
	return 0;
}
