#include <stdio.h>

void time(int second);

int main()
{
	int second;
	
	scanf("%d", &second);
	
	time(second);
	
	return 0;
}

void time(int second)
{
	int hour, min, sec;
	
	hour=second/3600;
	min=(second/60)%60;
	sec=(second)%3600;
	
	printf("[%d�ð� %d�� %d��]", hour, min, sec);
	
}
