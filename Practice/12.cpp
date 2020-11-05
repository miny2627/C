#include <stdio.h>

int main()
{
	int arr[6]={1, 2, 3, 4, 5, 6};
	int *a=&arr[0], *b=&arr[5];
	int i, tmp;
	
	for(i=0; i<3; i++) {
		tmp=*a; *a=*b; *b=tmp;
		*a++; *b--;
	}
	
	for(i=0; i<6; i++) printf("%d ", arr[i]);
	
	return 0;
}
