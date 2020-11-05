/* �ɸ� �ð� & ����� */

#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define N 5

#define TRUE 1
#define FALSE 0
#define DELAY_SEC 2

	void initialize_card_deck(char [], char [], int);
	void display_card_deck(char[], char[], int);
	int process_player_choice(char[], char[], int, int, int);
	void output_score(int, int);
	void delay(int t);

int main(void)
{
	char CARD[2*N];
	char SHOW[2*N];
	char retry;
	int match;
	int trial;
	int success, choice1, choice2;
	int i;
	float gap;
	
	while(1) {
	initialize_card_deck(CARD, SHOW, N);
	match=trial=0;
	while (match<N) {
    display_card_deck(CARD, SHOW, N);
	printf("[�õ��� ȸ�� %d]\n", trial);
    scanf("%d %d", &choice1, &choice2);
    success=process_player_choice(CARD, SHOW, N, choice1, choice2);
    if(success) match++;
    trial++;
}
 
	output_score(trial, N);
	time_t startTime=0, endTime=0;
	
	for(i=1; i<=1000000000; i++){ }
	endTime=clock();
	gap=(float)(endTime-startTime)/(CLOCKS_PER_SEC);
	printf("�ɸ� �ð� : %f ��\n", gap);
	printf("One More Time?\n");
	fflush(stdin);
	scanf("%c", &retry);
	
	if(retry=='y') {
	}
	else {
	printf("�����մϴ�.\n"); break;
}
	system("pause");
	system("cls");
}
	return 0;

}

void initialize_card_deck(char CARD[], char SHOW[], int n)
{
	int i;
	void shuffle_deck(char [], int);
	for(i=0; i<n; i++) CARD[2*i]=CARD[2*i+1]='A'+i;
	shuffle_deck(CARD, n);
	for(i=0; i<n; i++) SHOW[i]=FALSE;
}

void shuffle_deck(char C[], int n)
{
	int r1, r2, i, tmp;
 
	srand((unsigned int) time(NULL));
 
	for(i=0; i<2*n; i++) {
	r1=rand()%(2*n);
    r2=rand()%(2*n);
    tmp=C[r1]; C[r1]=C[r2]; C[r2]=tmp;
}
}

void display_card_deck(char CARD[], char SHOW[], int n)
{
	int i;
	void clear_screen();
 
	clear_screen();
 
	for(i=0; i<2*n; i++) printf("     %2d     ", i);
	printf("\n");
	for(i=0; i<2*n; i++) printf(" �ڡڡڡڡ� ");
	printf("\n");
	for(i=0; i<2*n; i++) printf(" |        | ");
	printf("\n");
	for(i=0; i<2*n; i++) printf(" |    %c   | ", (SHOW[i]==TRUE)? CARD[i]: '?');
	printf("\n"); 
	for(i=0; i<2*n; i++) printf(" |        | ");
	printf("\n");
	for(i=0; i<2*n; i++) printf(" �ڡڡڡڡ� ");
	printf("\n");
}

void clear_screen()
{system("cls");}

int process_player_choice(char CARD[], char SHOW[], int n, int c1, int c2)
{
	void display(int);
 
	if (SHOW[c1]==TRUE || SHOW[c2]==TRUE) {
    printf("�̹� ã�� ī���Դϴ�.\n");
    delay(DELAY_SEC);
    return FALSE;
}
	else if (CARD[c1]==CARD[c2] && !(c1==c2)) {
    printf("%c ������ ¦���� ã�ҽ��ϴ�. �����մϴ�.\n", CARD[c1]);
    delay(DELAY_SEC);
    SHOW[c1]=SHOW[c2]=TRUE;
    return TRUE;
   }
   else if (c1==c2) {
    printf("���� ī�带 �Է��Ͽ����ϴ�. �ٽ� �õ��ϼ���.\n ");
    delay(DELAY_SEC);
    return FALSE;
   }
	else if(CARD[c1]==CARD[c2]) {
	printf("%c ������ ¦���� ã�ҽ��ϴ�. �����մϴ�.\n", CARD[c1]);
	delay(DELAY_SEC);
    SHOW[c1]=SHOW[c2]=TRUE;
    return TRUE;
}
 else {
	SHOW[c1]=SHOW[c2]=TRUE;
    display_card_deck(CARD, SHOW, n);
    printf("¦���� �ƴմϴ�. �ٽ� �õ��ϼ���.\n");
    delay(DELAY_SEC);
    SHOW[c1]=SHOW[c2]=FALSE;
    return FALSE;
}
}

void delay(int t)
{
	time_t start=time(NULL);
 
	while (difftime(time (NULL), start)<t);
}

void output_score(int no_try, int n)
{
	printf("\n\n-----\n������ �������ϴ�.\n");
	printf("%d �� �õ��Ͽ� %d ���� ¦���� ã�ҽ��ϴ�.\n", no_try, n);
 
	if(no_try<=(int) (1.5*n)) printf("¦�� ã���� �����Դϴ�.\n");
	else if(no_try<=2*n) printf("�Ǹ��� �����Դϴ�.\n");
	else if(no_try<3*n) printf("�й��ϱ� �ٶ��ϴ�.\n");
	else printf("���� �Ҵ��Դϴ�.\n");
} 
