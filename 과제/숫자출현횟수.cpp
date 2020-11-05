#include <stdio.h>

int main()
{
	char num[1001];
	int count[10]={0};
	int i;
	scanf("%s", &num);
	
	for(i=0; num[i]!='\0'; i++) {
		if('0'<= num[i] && num[i]<='9')
		count[num[i]-'0']++;
	}
	for(i=0; i<10; i++) printf("%d ", count[i]);
	return 0;
}
