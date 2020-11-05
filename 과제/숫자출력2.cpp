#include <stdio.h>
#include <stdlib.h>
#define MaxSiz 100

int main()
{
	int n, i;
	float p[MaxSiz]; 
	scanf("%d", &n);
	
	if(n>MaxSiz) exit(0);
	
	for(i=0; i<n; i++) {
	scanf("%f", &p[i]);
	printf("%5.1f\n", p[i]);
}

	return 0; 
}
