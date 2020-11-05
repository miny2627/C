#include <stdio.h>

int find_max(int a, int b);

int main()
{
	int a, b;
	int max;
	scanf("%d %d", &a, &b);
	max=find_max(a, b);
	printf("%d", max);
	return 0;
}

int find_max(int a, int b)
{
	int max;
	if(a>b) max=a;
	else max=b;
}
