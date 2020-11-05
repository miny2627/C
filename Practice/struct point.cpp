#include <stdio.h>

struct point{
	int score;
	char a1;
	char a2;
	char a3;
	char a4;
	char name[10];
};

int main()
{
	int n, i;
	int max=0;
	int a;
	struct point p[10];
	scanf("%d\n", &n);
	
	for(i=0; i<n; i++) {
		scanf("%d %c %c %c %c", &p[i].score, &p[i].a1, &p[i].a2, &p[i].a3, &p[i].a4);
		scanf("%s", &p[i].name);
}
	for(i=0; i<n; i++) {
		if(p[i].a1=='O'|| p[i].a1=='o') p[i].score+=5;
		if(p[i].a2=='O'|| p[i].a2=='o') p[i].score+=5;
		if(p[i].a3=='O'|| p[i].a3=='o') p[i].score+=5;
		if(p[i].a4=='O'|| p[i].a4=='o') p[i].score+=5;
		if(max<p[i].score) { max=p[i].score; i=a;
		}
		printf("%d\n", p[i].score);
	}
	printf("%s\n", p[a].name);

	return 0;

}
