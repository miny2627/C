#include <stdio.h>
double FahToCel(double Fah);

int main()
{
	double Fah, Cel;
	scanf("%f", &Fah);
	printf("%f", FahToCel(Fah));
	return 0;
}

double FahToCel(double Fah)
{
	double Cel=(Fah-32)/1.8;
	return Cel;
}
