#include <stdio.h>

int triangle(int a, int b, int c);

int main()
{
	int a, b, c;
	char result;
	scanf("%d %d %d", &a, &b, &c);
	result=triangle(a, b, c);
	printf("%s", result);
	return 0;
}

int triangle(int a, int b, int c)
{
	if(a>=b && a>=c && a<b+c) printf("�ﰢ���� �����˴ϴ�.\n");
	else if(b>=a && b>=c && b<a+c) printf("�ﰢ���� �����˴ϴ�.\n");
	else if(c>=a && c>=b && c<a+b) printf("�ﰢ���� �����˴ϴ�.\n");
	else printf("�ﰢ���� �������� �ʽ��ϴ�.\n");
	
}
