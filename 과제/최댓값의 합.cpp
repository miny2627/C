#include <stdio.h>
#define MaxSiz 1000
#include <stdlib.h>

int main()
{
	int max1, max2, sum=0;
	int i, j, n, m;
	int a[MaxSiz], b[MaxSiz];
	scanf("%d %d", &n, &m);
	
	if(n>MaxSiz && m>MaxSiz) exit(0);
	
	for(i=0; i<n; i++) scanf("%d", &a[i]);
	for(j=0; j<m; j++) scanf("%d", &b[j]);
	
	max1=a[0]; max2=b[0];
	for(i=1, j=1; i<n && j<m; i++, j++) {
	if(a[i]>max1) max1=a[i];
	if(b[j]>max2) max2=b[j];
}
	sum+= max1+max2;

	printf("%d\n", sum);

	return 0;
}
