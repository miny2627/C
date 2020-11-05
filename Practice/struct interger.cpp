#include <stdio.h>
#include <stdlib.h>

struct interger_sets{
	int x;
	int y;
}p;

void total();

int main()
{
	total();
}

void total()
{
	int i;
	for(i=0; i<10; i++){
		scanf("%d %d", &p.x, &p.y);
		if(p.x==0 || p.y==0) {
			printf("0\n"); exit(0);
		}
		printf("%d\n", p.x*p.y);
	}
}
