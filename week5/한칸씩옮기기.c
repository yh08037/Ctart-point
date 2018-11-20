#include <stdio.h>

int main(void)
{
	int move, i, j, temp;
	char direction, str[] = "abcde";
	
	scanf("%c %d", &direction, &move);
	
	if(direction == 'L'){
		move = 5 - move;
	}
	
	for(i=0; i<move; i++){
		temp = str[4];
		for(j=4; j>0; j--){
			str[j] = str[j-1];			
		}
		str[0] = temp;
	}
	
	printf("%s", str);
	
	return 0;
}
