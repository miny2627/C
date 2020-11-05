#include <stdio.h>
#include <math.h>
#include <stdlib.h>

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
	int i, k, pos, pos1, j=0;
	int choice;
	float t;
	double theta, s, c;
	char yesno;
	
	printf("                        [그래프 그리기]\n\n");
	printf("1. Sin 그래프\n\n");
	printf("2. Cos 그래프\n\n");
	printf("3. Sin & Cos 그래프\n\n");
	printf("4. asin(tx) 그래프 \n\n");
	printf("5. asin(tx) & acos(tx) 그래프\n\n");
	printf("6. 끝내기\n\n");
	printf("메뉴를 선택하시오.\n\n");
	
	scanf("%d", &choice);
	
	while(choice!=6) {
	if(choice==1) {
		
		blank(OFFSET); printf("-1");
		blank(OFFSET*2-1); printf("0");
		blank(OFFSET*2-1); printf("+1");
		printf("\n\n");

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
		printf("%c", SINSYMBOL);
		blank(WIDTH-pos-1);
		printf("%c", VSYMBOL);
        blank(WIDTH);
		}
		
		else {
		pos=(int) (s*WIDTH);
		blank(WIDTH);
		printf("%c", VSYMBOL);
		blank(pos);
		printf("%c", SINSYMBOL);
		blank(WIDTH-pos-1);
		}
		printf("%c", VSYMBOL);
		printf("\n");
}
 
draw_v_boundary();
 
}

	else if(choice==2) {
		blank(OFFSET); printf("-1");
		blank(OFFSET*2-1); printf("0");
		blank(OFFSET*2-1); printf("+1");
		printf("\n\n");

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
		c=cos(theta);
  
		if(c<0) {
		pos1=(int) (WIDTH+c*WIDTH);
		blank(pos1);
		printf("%c", COSSYMBOL);
		blank(WIDTH-pos1-1);
		printf("%c", VSYMBOL);
        blank(WIDTH);
		}
		
		else {
		pos1=(int) (c*WIDTH);
		blank(WIDTH);
		printf("%c", VSYMBOL);
		if(theta==0) {
			blank(pos1-1);
			printf("%c", COSSYMBOL);
		}
		else {
		blank(pos1);
		printf("%c", COSSYMBOL);
		blank(WIDTH-pos1-1);
		}
	}
		printf("%c", VSYMBOL);
		printf("\n");
}
 
draw_v_boundary();
 
} 
	
	else if(choice==3) {
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
	c=cos(theta);
	s=sin(theta);
  
	if(s<0) {
		pos=(int) (WIDTH+s*WIDTH);
		if(s<c) {
			if(c<0) {
			pos1=(int) (WIDTH+c*WIDTH);
			blank(pos);
			printf("%c", SINSYMBOL);
			blank(pos1-pos-1);
			printf("%c", COSSYMBOL);
			blank(WIDTH-pos1-1);
			printf("%c", VSYMBOL);
			blank(WIDTH);
			
			}
			
			else {
			pos1=(int) (c*WIDTH);
			blank(pos);
			printf("%c", SINSYMBOL);
			blank(WIDTH-pos-1);
			printf("%c", VSYMBOL);
			blank(pos1);
			printf("%c", COSSYMBOL);
			blank(WIDTH-pos1-1);
			}
		}
		else {
			pos1=(int) (WIDTH+c*WIDTH);
			blank(pos1);
			printf("%c", COSSYMBOL);
			blank(pos-pos1-1);
			printf("%c", SINSYMBOL);
			blank(WIDTH-pos-1);
			printf("%c", VSYMBOL);
			blank(WIDTH);
		}
	}
	
	else {
		pos=(int) (s*WIDTH);
		if(s<c) {
			pos1=(int) (c*WIDTH);
			blank(WIDTH);
			printf("%c", VSYMBOL);
			blank(pos);
			printf("%c", SINSYMBOL);
			if(theta==0) {
			blank(pos1-pos-2);
			printf("%c", COSSYMBOL);	
			}
			else {
			blank(pos1-pos-1);
			printf("%c", COSSYMBOL);
		}
			blank(WIDTH-pos1-1);
		}
		
		else {
			if(c>0) {
				pos1=(int) (c*WIDTH);
				blank(WIDTH);
				printf("%c", VSYMBOL);
				blank(pos1);
				printf("%c", COSSYMBOL);
				blank(pos-pos1-1);
				printf("%c", SINSYMBOL);
				blank(WIDTH-pos-1);	
		}
			else {
				pos1=(int) (WIDTH+c*WIDTH);
				blank(pos1);
				printf("%c", COSSYMBOL);
				blank(WIDTH-pos1-1);
				printf("%c", VSYMBOL);
				blank(pos);
				printf("%c", SINSYMBOL);
				blank(WIDTH-pos-1);
			}
	}
}
	printf("%c", VSYMBOL);
	printf("\n");
}
 
draw_v_boundary();
 
}

	else if(choice==4) {
		printf("t를 입력하세요.\n");
		scanf("%f", &t);
		
		blank(OFFSET); printf("-a");
		blank(OFFSET*2-1); printf("0");
		blank(OFFSET*2-1); printf("+a");
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
		printf("%d", 135);
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
		s=sin(theta*t);
   
		if(s<0) {
		pos=(int) (WIDTH+s*WIDTH);
		blank(pos);
		printf("%c", SINSYMBOL);
    	blank(WIDTH-pos-1);
    	printf("%c", VSYMBOL);
    	blank(WIDTH);
		}
		
		else {
    	pos=(int) (s*WIDTH);
    	blank(WIDTH);
    	printf("%c", VSYMBOL);
    	blank(pos);
    	printf("%c", SINSYMBOL);
    	blank(WIDTH-pos-1);
		}
		
		printf("%c", VSYMBOL);
		printf("\n");
		}
  
draw_v_boundary();
  
}
	
	else if(choice==5) {
		printf("t를 입력하세요.\n");
		scanf("%f", &t);
		
		blank(OFFSET); printf("-a");
		blank(OFFSET*2-1); printf("0");
		blank(OFFSET*2-1); printf("+a");
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
		c=cos(theta*t);
		s=sin(theta*t);
  
		if(s<0) {
		pos=(int) (WIDTH+s*WIDTH);
			if(s<c) {
				if(c<0) {
					pos1=(int) (WIDTH+c*WIDTH);
					blank(pos);
					printf("%c", SINSYMBOL);
					blank(pos1-pos-1);
					printf("%c", COSSYMBOL);
					blank(WIDTH-pos1-1);
					printf("%c", VSYMBOL);
					blank(WIDTH);
					}
			
				else {
				pos1=(int) (c*WIDTH);
				blank(pos);
				printf("%c", SINSYMBOL);
				blank(WIDTH-pos-1);
				printf("%c", VSYMBOL);
				blank(pos1);
				printf("%c", COSSYMBOL);
				blank(WIDTH-pos1-1);
				}
				
			}
			else {
			pos1=(int) (WIDTH+c*WIDTH);
			blank(pos1);
			printf("%c", COSSYMBOL);
			blank(pos-pos1-1);
			printf("%c", SINSYMBOL);
			blank(WIDTH-pos-1);
			printf("%c", VSYMBOL);
			blank(WIDTH);
			}
	}
	
	else {
		pos=(int) (s*WIDTH);
		if(s<c) {
			pos1=(int) (c*WIDTH);
			blank(WIDTH);
			printf("%c", VSYMBOL);
			blank(pos);
			printf("%c", SINSYMBOL);
			if(theta==0) {
			blank(pos1-pos-2);
			printf("%c", COSSYMBOL);	
			}
			else {
			blank(pos1-pos-1);
			printf("%c", COSSYMBOL);
		}
			blank(WIDTH-pos1-1);
		}
		
		else {
			if(c>0) {
				pos1=(int) (c*WIDTH);
				blank(WIDTH);
				printf("%c", VSYMBOL);
				blank(pos1);
				printf("%c", COSSYMBOL);
				blank(pos-pos1-1);
				printf("%c", SINSYMBOL);
				blank(WIDTH-pos-1);	
		}
			else {
				pos1=(int) (WIDTH+c*WIDTH);
				blank(pos1);
				printf("%c", COSSYMBOL);
				blank(WIDTH-pos1-1);
				printf("%c", VSYMBOL);
				blank(pos);
				printf("%c", SINSYMBOL);
				blank(WIDTH-pos-1);
			}
	}
}
	printf("%c", VSYMBOL);
	printf("\n");
}
 
draw_v_boundary();
 	
}

	else {
		printf("틀린 메뉴입니다. 프로그램을 종료합니다.\n");
		exit(0);
	}
	
	printf("                        [그래프 그리기]\n\n");
	printf("1. Sin 그래프\n\n");
	printf("2. Cos 그래프\n\n");
	printf("3. Sin & Cos 그래프\n\n");
	printf("4. asin(tx) 그래프 \n\n");
	printf("5. asin(tx) & acos(tx) 그래프\n\n");
	printf("6. 끝내기\n\n");
	printf("메뉴를 선택하시오.\n\n");
	
	scanf("%d", &choice);
}

	printf("프로그램을 종료합니다.\n");
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
