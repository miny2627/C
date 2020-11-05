#include <stdio.h>
#include <stdlib.h>

#define MaxSiz 1000
int board[MaxSiz][MaxSiz];

int main()
{
	int siz;
	void magic_square(int), print_board(int);
	void verify_solution(int);
	
	printf("마방진의 보드 크기를 입력하시오.\n");
	scanf("%d", &siz);
	if(siz>MaxSiz) { printf("크기 제한을 넘었습니다.\n"); exit(1);}
	
	magic_square(siz);
	print_board(siz);
	verify_solution(siz);
	
	return 0;
}
 
void magic_square(int n)
{
	int k, x, y, next_x, next_y;
	
	for(y=0; y<n; y++)
	for(x=0; x<n; x++) board[y][x]=0;
	
	k=1;
	y=0; x=n/2;
	while(k<=n*n) {
		board[y][x]=k;
		
		next_x=x-1; next_y=y-1;
		if(next_x<0) next_x=n-1;
		if(next_y<0) next_y=n-1;
		
		if(board[next_y][next_x]!=0) y++;
		else {x=next_x; y=next_y;}
		
		k++;
}
}

void print_board(int n)
{
	int x, y;
	
	for(y=0; y<n; y++) {
		for(x=0; x<n; x++) {
			printf("  %6d  ", board[y][x]);
		}
		printf("\n\n");
	}
}

void verify_solution(int n)
{
	int x, y;
	int sum;
	
		for(x=0; x<n; x++) {
			for(y=0, sum=0; y<n; y++) { 
			sum+=board[y][x];
			}
		}
		for(y=0; y<n; y++) {
			for(x=0, sum=0; x<n; x++) {
			sum+=board[y][x];
			}
		}
		for(x=0, sum=0; x<n; x++) {
			sum+=board[x][x];
		}
		for(y=n-1, sum=0, x=0; y>=0; y--) {
			sum+=board[y][x];
			x++;
		}
		
	if(sum== (n*(n*n+1)/2) ) printf("TRUE");	
	else printf("FALSE");
		
}
