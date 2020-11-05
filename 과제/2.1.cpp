#include <stdio.h>

int main()
{
	int m, n, T;
	
	printf("두 개의 정수를 입력하라\n");
	scanf("%d%d", &m, &n);
	
	if(m<n) T=m;
	else T=n;
	
	while(!(m%T==0 && n%T==0))
	T=T-1;
	
	printf("%d와 %d의 최대 공약수는 %d이다.\n", m, n, T);
	return 0;
}
