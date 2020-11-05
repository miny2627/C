#include <stdio.h>

int main()
{
	int n, k, T;
	int count=0;
	
	scanf("%d %d", &n, &k);
	
	if (n<k) T=n;
	else T=k;
	
	 while(count<3 && T>=1 && T--) {
	 if (n%T==0 && k%T==0) {
	 printf("%d\ ", T);
	 }
	 count++; 
	 }
	return 0;
}
