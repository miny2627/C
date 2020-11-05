#include <stdio.h>

int main()
{
	int n, k, a=0;
	scanf("%d %d", &n, &k);
	
	for (int i=1; i<=n; ++i) {
		if(n%i==0)
		a++;
	}
	
	if (a>=k) printf("1\n");
	else printf("-1\n");
	
	return 0;
}
