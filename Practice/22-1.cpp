#include <stdio.h>
#include <string.h>

struct employee{
	char name[10];
	char number[20];
	int pay;
};

int main()
{
	struct employee p;
	
	scanf("%s %s %d", &p.name, &p.number, &p.pay);
	
	printf("�̸� : %s\n�ֹε�Ϲ�ȣ: %s\n�޿� ���� : %d", p.name, p.number, p.pay);
	
	return 0;
}
