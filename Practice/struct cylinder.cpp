#include <stdio.h>
#define PI 3.141592

struct cylinder {
	float r;
	float h;
}p;

int main()
{
	float bulk;
	scanf("%f %f", &p.r, &p.h);
	
	bulk=(p.r*p.r)*PI*p.h;
	
	printf("%.3f", bulk);
	
	return 0;
}
