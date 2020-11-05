#include <stdio.h>

int main()
{
	int arr[6]={1, 2, 3, 4, 5, 6};
	int tmp;
	int *ptr1=&arr[0], *ptr2=&arr[5];
	int i;
	
	for(i=0; i<3; i++) {
		tmp=*ptr1; *ptr1=*ptr2; *ptr2=tmp;
		*ptr2--; *ptr1++;
	}
	
	for(i=0; i<6; i++) printf("%d\n", arr[i]);
	
	return 0;
}
