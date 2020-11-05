#include <stdio.h>

int main()
{
	int i, j, k, n;
	scanf("%d", &n);
	
	for(i=0; i<n; i++) {
		if(i==0 || i==n-1)
		for(j=n-i; j<=n; j++) printf("*");
		else
		for(j=1; j<=n; j++) {
		if(j==n-i || j==n) printf("*");
		else printf(" ");
	}
		printf("\n");
	}
	return 0;
}
