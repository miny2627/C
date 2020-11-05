#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int i, k;
	char symbol;
	int width, height;
	int choice;
	
	printf("1. 속이 빈 직사각형\n");
	printf("2. 채워진 직사각형\n");
	scanf("%d", &choice);
	
	if (choice==1) {
		printf("너비와 높이를 입력하세요\n");
		scanf("%d%d", &width, &height);
		
		printf("테두리 기호를 입력하세요\n");
		symbol=getch();
		
		for (i=0; i<width; i++) printf("%c", symbol);
		printf("\n");
		
		for (k=0; k<height-2; k++) {
			printf("%c", symbol);
			for (i=0; i<width-2; i++) printf(" ");
			printf("%c\n", symbol);
		}
		
		for (i=0; i<width; i++) printf("%c", symbol);
		printf("\n");
		
	}
	else if (choice==2) {
		printf("너비와 높이를 입력하세요\n");
		scanf("%d%d", &width, &height);
		
		printf("테두리 기호를 입력하세요\n");
		symbol=getch();
		
		for (i=0; i<width; i++) printf("%c", symbol);
		printf("\n");
		
		for (k=0; k<height-2; k++) {
			printf("%c", symbol);
			for (i=0; i<width-2; i++) printf("%c", symbol);
			printf("%c\n", symbol);
		}
		
		for (i=0; i<width; i++) printf("%c", symbol);
		printf("\n");
		
	}
	else {
		printf("틀린ㅁ뉴입니다. 프로그램을 종료합니다.\n");
		exit (0); 
	}
	
	return 0;
}
