#include <stdio.h>

int main()
{
	int n, i, k, j;
	scanf("%d", &n);
	
	for(i=0; i<n; ++i) {
	for(k=i; k<i; ++k) printf(" ");
	for(j=0; j<n; ++j) {
    if(i==0 || j==0 || i==n-1 || j==n-1) printf("*");
	else printf(" ");
	}

	printf("\n");
}
	return 0;
}
