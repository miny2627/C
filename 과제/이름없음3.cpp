#include <stdio.h>

int main()
{
	int n, k, m, T;
	
	scanf("%d %d %d", &n, &k, &m);
	
	if (n<k) T=n;
	else T=k;
	if (m<k) T=m;
	
	 for(T=n; T>=1; --T) {
	 if (n%T==0 && k%T==0 && m%T==0) {
	 printf("%d ", T);
	 }
	 }
	 printf("%d\n");
	return 0;
}
