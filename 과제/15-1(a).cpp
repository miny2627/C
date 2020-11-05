#include <stdio.h>

int main()
{
	int a=10, b=10, c=10;
	a=(++b)+(++c);
	printf("%d %d %d\n", a, b, c);
	a=--c+c;
	printf("%d %d %d\n", a, b, c);
	
	return 0;
}
