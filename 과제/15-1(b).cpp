#include <stdio.h>

int main()
{
	int i, n=0;
	for(i=2; i<20; i+=2) {
		if(i%4==0) continue;
		n=n+i;
		printf("%d %d\n", i, n);
	}
	return 0;
}
