#include <stdio.h>

int main()
{
	int n, k, a=0;
	scanf("%d %d", &n, &k);
	
	for(int T=n;T>=1;--T) {
		if (n % T == 0 && k % T == 0) {
	    printf("%d ", T);
		a+=1;
	}
	
	if (a==3) {
    printf("\n");
    break;
}
}
	return 0;
}
