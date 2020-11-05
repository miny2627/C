#include <stdio.h>

int main()
{
	int n=0, i=2;
	
	while(i<20) {
		i+=2;
		if(i%4==0) continue;
		n=n+i;
		printf("%d %d\n", i, n);
}
	
	return 0;
}
