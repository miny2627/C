#include <stdio.h>
#include <stdlib.h>
int *score;

int main()
{
	int i, N;
	float sum, average, variance;
	
	printf("������ ������ �Է��϶�.");
	scanf("%d", &N);
	
	score=(int *) malloc(N*sizeof(int));
	
	for(i=0; i<N; i++) scanf("%d", &score[i]);
	for(sum=0.0, i=0; i<N; i++) sum+=score[i];
	average=sum/N;
	
	for(sum=0.0, i=0; i<N; i++) sum+=(score[i]-average)*(score[i]-average);
	variance=sum/N;
	
	printf("��հ� �л��� %f�� %f�̴�.\n", average, variance);
	
	free(score);
	
	return 0;
}
