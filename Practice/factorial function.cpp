#include <stdio.h>

int factorial(int n);

int main()
{
	int fact, n;
	scanf("%d", &n);
	fact=factorial(n);
	printf("%d", fact);
	return 0;
}

int factorial(int n)
{
	int i, fact=1;
	for(i=1; i<=n; i++) fact*=i;
	return fact;
}
