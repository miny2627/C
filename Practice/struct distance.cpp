#include <stdio.h>
#include <math.h>

struct distance{
	int xpos;
	int ypos;
};

int main()
{
	float distance;
	struct distance pos1, pos2;
	scanf("%d %d", &pos1.xpos, &pos1.ypos);
	scanf("%d %d", &pos2.xpos, &pos2.ypos);
	
	distance=sqrt((pos1.xpos-pos2.xpos)*(pos1.xpos-pos2.xpos)+(pos1.ypos-pos2.ypos)*(pos1.ypos-pos2.ypos));
	
	printf("%.2f", distance);
	
	return 0;
}
