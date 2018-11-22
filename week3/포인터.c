#include <stdio.h>

int main(void)
{
	int a = 10;
	int *p = &a;
  
	printf("a의 주소 : %p \n", p);
	printf("p의 주소 : %p \n", &p);
	printf("p가 가리키는 a에 저장된 값 : %d \n", *p);

	return 0;
}
