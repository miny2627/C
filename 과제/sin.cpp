#include <stdio.h>
#include <math.h>

#define OFFSET 10
#define WIDTH 20
#define VSYMBOL '|'
#define HSYMBOL '-'
#define CSYMBOL '*'

#define PI 3.141592
#define delta 0.1

int main()
{
	int i, k, pos, j=0;
	double theta, s;
	void draw_v_boundary();
	void blank(int);
 
	blank(OFFSET); printf("-1");
	blank(OFFSET*2-1); printf("0");
	blank(OFFSET*2-1); printf("+1");
	printf("\n");
 
draw_v_boundary();
 
	for(theta=0.0; theta<=2.0*PI; theta+=delta) {
	if(theta==0) {
    blank(OFFSET-1);
    printf("0");
}
  
	else if(theta==0.7){
	blank(OFFSET-2);
	printf("45");
}
 
	else if(theta==1.5000000000000002) {
    blank(OFFSET-2);
    printf("90");
}
  
	else if(theta==2.3000000000000007){
    blank(OFFSET-3);
    printf("135");
}
  
    else if(theta==3.1000000000000014){
	blank(OFFSET-3);
    printf("180");
}
  
	else if(theta==3.9000000000000021){
    blank(OFFSET-3);
    printf("225");
}
  
    else if(theta==4.6999999999999993){
    blank(OFFSET-3);
    printf("270");
}
  
    else if(theta==5.4999999999999964) {
    blank(OFFSET-3);
    printf("315");
}
	else if(theta==6.1999999999999940) {
    blank(OFFSET-3);
    printf("360");
}


	else
	blank(OFFSET);
	printf("%c", VSYMBOL);
	s=sin(theta);
  
	if(s<0) {
	pos=(int) (WIDTH+s*WIDTH);
	blank(pos);
	printf("%c", CSYMBOL);
    blank(WIDTH-pos-1);
    printf("%c", VSYMBOL);
    blank(WIDTH);
}
	else {
    pos=(int) (s*WIDTH);
    blank(WIDTH);
    printf("%c", VSYMBOL);
    blank(pos);
    printf("%c", CSYMBOL);
    blank(WIDTH-pos-1);
}
	printf("%c", VSYMBOL);
	printf("\n");
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
