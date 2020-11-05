#include <stdio.h>

struct library{
	char title[20];
	char author[20];
	int page;
};

int main()
{
	struct library book1;
	struct library book2;
	struct library book3;
	
	scanf("%s %s %d", &book1.title, &book1.author, &book1.page);
	scanf("%s %s %d", &book2.title, &book2.author, &book2.page);
	scanf("%s %s %d", &book3.title, &book3.author, &book3.page);
	
	printf("book1\n历磊: %s\n力格 : %s\n其捞瘤 荐 : %d\n\n", book1.title, book1.author, book1.page);
	printf("book2\n历磊: %s\n力格 : %s\n其捞瘤 荐 : %d\n\n", book2.title, book2.author, book2.page);
	printf("book3\n历磊: %s\n力格 : %s\n其捞瘤 荐 : %d\n", book3.title, book3.author, book3.page);
	
	return 0;
}
