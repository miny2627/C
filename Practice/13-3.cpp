#include <stdio.h>

int main()
{
	int arr[5]={1, 2, 3, 4, 5};
	int *ptr=&arr[4];
	int sum=0, i;
	
	for(i=0; i<5; i++) {
		*ptr--; sum+=arr[i];
	}
	printf("%d", sum);
	return 0;
	
}
