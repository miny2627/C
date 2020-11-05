#include <stdio.h>

int main()
{
	int n, k;
	int i, a=0;
	scanf("%d %d", &n, &k);
	
	for(i=n; i>=1; i--) {
		if(n%i==0) {
		printf("%d ", i);
		a++;
	}
	if(a==k) {
	printf("\n");
	break;
}
}
	return 0;
}
