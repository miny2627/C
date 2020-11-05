#include <stdio.h>

struct complex_number1{
	int a;
	int b;
};

struct complex_number2{
	int c;
	int d;
};

int sum(struct complex_number1 p, struct complex_number2 q);

int main()
{
	struct complex_number1 p;
	struct complex_number2 q;
	
	sum(p, q);
	
	return 0;
}

int sum(struct complex_number1 p, struct complex_number2 q)
{
	scanf("%d %d", &p.a, &p.b);
	
	scanf("%d %d", &q.c, &q.d);
	
	printf("%d+%di", p.a+q.c, p.b+q.d);
}
