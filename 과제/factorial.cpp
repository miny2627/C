#include <stdio.h>

int main()
{
	int i, fact;
	int n;
	scanf("%d", &n);
	
	for(fact=1, i=1; i<=n; i++) fact*=i;
	printf("%d", fact);
	
	return 0;
}
