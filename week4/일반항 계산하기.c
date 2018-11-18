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
	
	if (a == b) {
		printf("잘못된 입력입니다.\n");
		return 0;
		}
	
	else
		printf("합은 %d입니다.", (a+b)*(b-a-1)/2);
	
	return 0;
}
