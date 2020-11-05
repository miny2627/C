#include <stdio.h>

int main()
{
	int i, j;
	
	for(i=5; i<=20; i=i+4) {
		printf("i=%d : ", i);
		if(i>10) { j=0; while(j<i) {printf("%d -> ", j); j=j+5;}}
	printf("\n");
	}
	return 0;
}
