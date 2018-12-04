#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	
	int i, j, sum=0;
	int score[10] = {0,}, temp, max=0;
	
	for(i=0; i<50; i++){
		temp = rand()%101;
		if(temp==100){
			score[9]++;
		}
		else{
			for(j=0; j<10; j++){
				if(temp/10==j){
					score[j]++;
				}
			}
		}
	}
	
	for(i=0; i<10; i++){
		printf("%d ", score[i]); 
	}
	printf("\n");
	
	for(i=0; i<10; i++){
		if(max<score[i]){
			max = score[i];
		}
	}
	
	for(i=0; i<max; i++){
		for(j=0; j<10; j++){
			if(i>=max-score[j]){
				printf("  *");
			}
			else{
				printf("   ");
			}
		}
		printf("\n");
	}
	
	for(i=0; i<10; i++){
		printf("%3d", 10*i+5);
	}
	
	return 0;
}
