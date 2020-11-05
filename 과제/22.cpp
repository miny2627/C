#include <stdio.h>

int main()
{
	int n, k, m, a=0;
	scanf("%d %d %d", &n, &k, &m);
	
	for(int T=1;T<=n;++T) { 
		if (n % T == 0 && k % T == 0 && m % T==0) {
	    printf("%d ", T);
	    a++;
	}
    if (a==4) {
    printf("\n");
    break;
}
}
	return 0;
}
