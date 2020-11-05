#include <stdio.h>

int main()
{
	int i, j, k, size=4;
	int n;
	scanf("%d", &n);
	if(1<=n && n<=9) {
	for(i=0; i<size; i++) {
		for(j=0; j<size-i; j++) printf(" ");
		for(k=0; k<size; k++) printf("%d", n);
		printf("\n");
	}
}
	return 0;
}
