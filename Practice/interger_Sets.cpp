#include <stdio.h>
#include <stdlib.h>
#define Max 10

struct interger_sets{
	int x;
	int y;
}p[Max];

int main()
{
	int i;
	
	for(i=0; i<Max; i++) {
		scanf("%d %d", &p[i].x, &p[i].y);
		if(p[i].x==0 || p[i].y==0) { printf("0\n"); exit(0);}
		printf("%d\n", p[i].x*p[i].y);
	}
	
	return 0;
}
