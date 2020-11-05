#include <stdio.h>

void print(int n1, int n2);

int main()
{
	int n1, n2;
	scanf("%d %d", &n1, &n2);
	
	print(n1, n2);
	
	return 0;
}

void print(int n1, int n2)
{
	int i, a=0;
	
	if(n1>n2) {
		for(i=n2; i<n1; i++) {
		if(i%2!=0) {
		printf("%d ", i); a++;
	}
}
}
	else {
		for(i=n1; i<n2; i++) {
		if(i%2!=0) {
		printf("%d ", i); a++;
	}
}
}
	printf("(%d)", a);
}
