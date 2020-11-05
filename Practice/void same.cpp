#include <stdio.h>
#include <stdlib.h>

int* same(int a[],int b[],int n){

int *result=(int*)malloc(n);
	
	int k=0;
	
	for(int i=0;a[i];i++){
		for(int j=0;b[j];j++){
		
		if(a[i]==b[j]){
			result[k] = a[i];
			k++;
		}
	}
	}
	return result;
}
int main(){
	int a[] = {10,12,33,21,22};
	int b[] = {53,21,12,65,99,33,88};
	
	int *c = NULL;
	
	c = same(a,b,7);
	
	for(int i=0;c[i];i++)printf("%d ",c[i]);
	
	return 0;
}
