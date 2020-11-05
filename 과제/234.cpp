#include <stdio.h>

int main()
{
	int  choice;
	int n, k, T;
	
	scanf("%d", &choice);
	
	if (choice==1) {
		scanf("%d %d", &n, &k);
		for(T=1; T<=n; ++T){
        if(n%T==0 && k%T==0 ){
            printf("%d ", T);
}
}
}
	else if (choice==2) {
		scanf("%d %d", &n, &k);

    for(int T=n; T>=1; --T){
        if(n%T==0 && k%T==0){
            printf("%d ", T);
            printf("\n");
            break;
        }
    
        }
    }
    return 0;

}
