#include <stdio.h>

int main()
{
	int i, j, n;
	scanf("%d", &n);
  	
	  for(i=0; i<n; i++) {
    	for(j=1; j<n-i; j++) printf(" ");
    	for(j=n-i; j<=n; j++) {
    		if(i==n-1 || j==n-i || j==n) printf("*");
    		else printf(" ");
		}
    printf("\n");
  }
	return 0;
}

