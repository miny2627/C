#include <stdio.h>

struct employee{
	char name[10];
	char number[20];
	int pay;
};

int main()
{
	struct employee p[3] = {
		{"�̷ο�", "980404-120321", 30},
		{"�ֹο�", "980227-120321", 40},
		{"���ָ�", "980331-0000000", 50}
	};
	
	int i;
	for(i=0; i<3; i++) printf("%s %s %d\n", p[i].name, p[i].number, p[i].pay);
	
	return 0;
}
