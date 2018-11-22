#include <stdio.h>

int main(void)
{
	int i, a[10] = {1, 5, 3, 6, 4, 7, 2, 9, 8, 0};
	
	for(i=0; i<10; i++){
		printf("a[i] : %d\n", a[i]);
		printf("*(a+i) : %d \n\n", *(a+i));
	}
	
	return 0;
}
