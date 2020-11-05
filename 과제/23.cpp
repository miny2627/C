#include <stdio.h>

int main()
{
	int n, k, T;
	int count=0;
	
	scanf("%d %d", &n, &k);
	
	for (T=n; T>=1; --T) {
		if (n%T==0 && k%T==0) {
		printf("%d ", T);
		count++;
	}
}
    printf("%d", count);
    printf("\n");
	return 0;
}

