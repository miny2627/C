#include <stdio.h>
#include <math.h>

#define OFFSET 10
#define WIDTH 20
#define VSYMBOL '|'
#define HSYMBOL '-'
#define SINSYMBOL '*'
#define COSSYMBOL '+'

#define PI 3.141592
#define delta 0.1

void draw_v_boundary();
void blank(int);

int main()
{
	int choice;
	int i, k, pos, j=0;
	double theta, s, c;
	
	printf("[sin & cos 그래프 그리기]\n\n");
 
	
	blank(OFFSET); printf("-a");
	blank(OFFSET*2-1); printf("0");
	blank(OFFSET*2-1); printf("+a");
	printf("\n");
 
draw_v_boundary();
 
	for(theta=0.0; theta<=2.0*PI; theta+=delta) {

	blank(OFFSET);
	printf("%c", VSYMBOL);
	c=cos(theta);
	s=sin(theta);
  
	blank(WIDTH);
	printf("%c", VSYMBOL);
	printf("%c", SINSYMBOL);
	printf("%c", COSSYMBOL);
	blank(WIDTH-pos-1);
	printf("%c", VSYMBOL);
}
 
draw_v_boundary();
 
return 0;
}
 
void draw_v_boundary()
{
	int i;
  	void blank(int);
  	blank(OFFSET);
 	for(i=0; i<2*WIDTH+3; i++) printf("%c", HSYMBOL);
	printf("\n");
}
 
void blank(int no)
{ while (0<no--) printf(" ");} 
