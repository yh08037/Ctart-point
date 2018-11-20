#include <stdio.h>

void Sum( int a, int b, int result ) {
    result = a + b;
}

int main(void)
{
    int result = 0, a = 1, b = 2;
    
    Sum(a, b, result);
    
	printf(¡°%d¡±, result);
    
	return 0;
}
