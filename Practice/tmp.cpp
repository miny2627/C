#include <stdio.h>

int main()
{
	int a, b, c;
	int tmp;
	
	
	scanf("%d %d %d", &a, &b, &c);
	
	tmp=c;
	c=b;
	b=a;
	a=tmp;
	
	printf("%d %d %d", a, b, c);
	
	return 0;
}
