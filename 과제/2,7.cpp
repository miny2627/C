#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	int i, k;
	char symbol;
	int width, height;
	int choice;
	
	printf("1. ���� �� ���簢��\n");
	printf("2. ä���� ���簢��\n");
	scanf("%d", &choice);
	
	if (choice==1) {
		printf("�ʺ�� ���̸� �Է��ϼ���\n");
		scanf("%d%d", &width, &height);
		
		printf("�׵θ� ��ȣ�� �Է��ϼ���\n");
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
		printf("�ʺ�� ���̸� �Է��ϼ���\n");
		scanf("%d%d", &width, &height);
		
		printf("�׵θ� ��ȣ�� �Է��ϼ���\n");
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
		printf("Ʋ�������Դϴ�. ���α׷��� �����մϴ�.\n");
		exit (0); 
	}
	
	return 0;
}
