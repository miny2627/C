#include <stdio.h>
#include <stdlib.h>
int *score;

int main()
{
	int i, N;
	float sum, average, variance;
	
	printf("성적의 개수를 입력하라.");
	scanf("%d", &N);
	
	score=(int *) malloc(N*sizeof(int));
	
	for(i=0; i<N; i++) scanf("%d", &score[i]);
	for(sum=0.0, i=0; i<N; i++) sum+=score[i];
	average=sum/N;
	
	for(sum=0.0, i=0; i<N; i++) sum+=(score[i]-average)*(score[i]-average);
	variance=sum/N;
	
	printf("평균과 분산은 %f와 %f이다.\n", average, variance);
	
	free(score);
	
	return 0;
}
