#include <stdio.h>

int main()
{
	int n;
	int sum=0;
	
	for(n=1; n<=1000; n++) {
		if(!(n%11==0 || n%13==0))
		sum+=n;
	}
	printf("%d", sum);
	return 0;
}
