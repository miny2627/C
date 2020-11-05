#include <stdio.h> 
#include <stdlib.h> 
#include <math.h> 

#define OFFSET 10 
#define WIDTH 20 

#define VSYMBOL '|' 
#define HSYMBOL '-' 
#define COSSYMBOL '+' 
#define SINSYMBOL '*' 
#define PI 3.141592 
#define delta 0.1 

void draw_v_boundary(); 
void blank(int); 

int main(void) 

{ 
	int i; 
	int pos; 
	double theta, s,c; 
	char line[WIDTH*2+2]; 

	blank(OFFSET); printf("-1");
	blank(OFFSET*2-1); printf("0");
	blank(OFFSET*2-2); printf("+1");
	printf("\n");
	
draw_v_boundary(); 

	for(theta=0.0; theta<2.0*PI; theta+=delta) { 
	s=sin(theta); 
	c=cos(theta); 

	for(i=0;i<=WIDTH*2;i++) line[i]=' '; 
	line[0]=VSYMBOL;
	line[WIDTH]=VSYMBOL;
	line[WIDTH*2]=VSYMBOL; 
	line[(int)(WIDTH+s*WIDTH)]=SINSYMBOL; 
	line[(int)(WIDTH+c*WIDTH)]=COSSYMBOL; 

    blank(OFFSET); 

    for(i=0;i<=WIDTH*2;i++)printf("%c",line[i]); 
	printf("\n"); 
} 
    return 0;   
} 

void blank(int no) 
{while(0<no--) printf(" ");} 

void draw_v_boundary() 
{ 
	int i; 
	blank(OFFSET); 
	for(i=0;i<2*WIDTH+3; i++) printf("%c",HSYMBOL); 
	printf("\n"); 
} 
