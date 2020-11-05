#include <stdio.h>

int fibo(int n);

int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", fibo(n));
	return 0;
}

int fibo(int n)
{
	if( n<2 )
		return n;
	else
	{
		int i, tmp, f1 = 1, f0 = 0;
		for( i=2; i<=n; i++ )
		{
			tmp = f1;
			f1 += f0;
			f0 = tmp;
		}
		return f1;
	}
}
