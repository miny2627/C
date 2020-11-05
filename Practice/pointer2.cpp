#include <stdio.h>
#include <stdlib.h>
#define MaxSiz 1000

int change_sum(int a[], int b[], int n);

int main()
{
	int a[MaxSiz], b[MaxSiz];
	int n, i;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++) scanf("%d", &a[i]);
	for(i=0; i<n; i++) scanf("%d", &b[i]);
	
	change_sum(a, b, n);
	
	return 0;
}

int change_sum(int a[], int b[], int n)
{
	int i;
	int m[MaxSiz];

	for(i=0; i<n; i++) m[i]=a[i]+b[i];
	
	for(i=0; i<n; i++) printf("%d ", m[i]);
}
