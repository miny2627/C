#include <stdio.h>
#include <stdlib.h>
#define MaxSiz 1000

void change(int *a, int *b, int n);

int main()
{
	int a[MaxSiz], b[MaxSiz];
	int n, i;
	if(n>MaxSiz) exit;
	scanf("%d", &n);
	for(i=0; i<n; i++) scanf("%d", &a[i]);
	for(i=0; i<n; i++) scanf("%d", &b[i]);
	change(&a[n], &b[n], n);
	for(i=0; i<n; i++) printf("%d ", a[i]);
	printf("\n");
	for(i=0; i<n; i++) printf("%d ", b[i]);
	
	return 0;
}

void change(int *a, int *b, int n)
{
	int tmp;
	int i;
	for(i=0; i<n; i++) {
		tmp=a[i];
		a[i]=b[i];
		b[i]=tmp;
	}
}
