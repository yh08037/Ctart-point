#include<stdio.h>

int main (void)
{
	int a, b, temp, n, result=0;
	
	scanf("%d %d", &a, &b);
	
	if(a > b){
		temp = a;
		a = b;
		b = temp;
	}
	
	n = b - a;
	
	if (n == 0) {
    	printf("잘못된 입력입니다.\n");
    	return 0;
    }
	else if (n == 1){
		result=0;
		}
	else if (n == 2){
		result = a*(n-1)+1;
		}
	else if (n == 3){
		result = a*(n-1)+1+2;
		}
	else if (n == 4){
		result = a*(n-1)+1+2+3;
		}
	else if (n == 5){
		result = a*(n-1)+1+2+3+4;
		}
	else if (n == 6){
		result = a*(n-1)+1+2+3+4+5;
		}
	else if (n == 7){
		result = a*(n-1)+1+2+3+4+5+6;
		}
	else if (n == 8){
		result = a*(n-1)+1+2+3+4+5+6+7;
		}

	printf("합은 %d입니다.", result);

	return 0;
}
