#include <stdio.h>
#define MaxSiz 1000
#include <stdlib.h>

int main()
{
	int n;
	int i, j, sum=0;
	int a[MaxSiz];
	scanf("%d", &n);
	
	if(n>MaxSiz) exit(0);
	
	for(i=0; i<n; i++) scanf("%d", &a[i]);
	
	scanf("%d %d", &i, &j);
	
	for(int k=i; i<=j; i++) sum+= a[i];

	printf("%d\n", sum);

	return 0;
}
