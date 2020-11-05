#include <stdio.h>
#include <string.h> 

struct time{
	int year;
	int month;
	int day;
	char date[7];
};

int main()
{
	struct time s1;
	s1.year=1997;
	s1.month=12;
	s1.day=19;
	strcpy(s1.date, "¿ù¿äÀÏ"); 
	printf("%d.%d.%d %s", s1.year, s1.month, s1.day, s1.date);
	
	return 0;
}
