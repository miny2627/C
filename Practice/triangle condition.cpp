#include <stdio.h>

int triangle(int a, int b, int c);

int main()
{
	int a, b, c;
	char result;
	scanf("%d %d %d", &a, &b, &c);
	result=triangle(a, b, c);
	printf("%s", result);
	return 0;
}

int triangle(int a, int b, int c)
{
	if(a>=b && a>=c && a<b+c) printf("삼각형이 성립됩니다.\n");
	else if(b>=a && b>=c && b<a+c) printf("삼각형이 성립됩니다.\n");
	else if(c>=a && c>=b && c<a+b) printf("삼각형이 성립됩니다.\n");
	else printf("삼각형이 성립되지 않습니다.\n");
	
}
