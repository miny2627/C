#include <stdio.h>
void time(int second, int *hour, int *min, int *sec);

int main()
{
	int hour, min, sec, second;
	scanf("%d", &second);
	time(second, &hour, &min, &sec);
	printf("%d�ð� %d�� %d��", hour, min, sec);
	return 0;
}

void time(int second, int *hour, int *min, int *sec)
{
	*hour=(second/3600);
	*min=(second%3600)/60;
	*sec=(second%60);
} 
