#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k;
	int n;
	scanf("%d", &n);
	
	if(n<4) exit(0);
	 
	for(i=1; i<=n; i++) {
		if(i==1 || i==n)
		for(j=1; j<=i; j++) printf("%d", j%10);
		else
		for(j=1; j<=i; j++){
			if(j==1 || j==i) printf("%d", j%10);
			else printf("*");
		} 
		printf("\n");
	}

	return 0;
}
