#include <stdio.h>

int main()
{
	int repeat, count = 1;
	scanf("%d", &repeat);
	
    float money, amount, days;
	
	while(count<=repeat) {

	
	scanf("%f %f", &amount, &days);
	
	if (amount<=10000) {
	
	money = (days/365)*(0.0080)*(amount);
	
	printf("%.2f\n", money);
}
	
	else if (10000<amount && amount<=100000) {
	
	money = (days/365)*(0.0082)*(amount);
	
	printf("%.2f\n", money);
}
	
	else if (amount>100000) {
	
	money = (days/365)*(0.0084)*(amount);
	
	printf("%.2f\n", money);
	
}
    count=count+1;
    
}

}
