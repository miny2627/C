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
	
	printf("이름 : %s\n주민등록번호: %s\n급여 정보 : %d", p.name, p.number, p.pay);
	
	return 0;
}
