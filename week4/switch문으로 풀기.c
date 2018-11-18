#include <stdio.h>

int main(void)
{
	int a, b, temp, n, result=0;
	
	scanf("%d %d", &a, &b);
	
	if(a > b){
		temp = a;
		a = b;
		b = temp;
	}
	
	n = b - a;
	
	switch (n){
		case 8:
			result += a + 7;
		case 7:
			result += a + 6;
		case 6:
			result += a + 5;
		case 5:
			result += a + 4;
		case 4:
			result += a + 3;
		case 3:
			result += a + 2;
		case 2:
			result += a + 1;
		case 1:
			break;
		default:printf("잘못된 입력입니다.\n"); 
			return 0;
	}
	
	printf("합은 %d입니다.", result);

	return 0;
}
