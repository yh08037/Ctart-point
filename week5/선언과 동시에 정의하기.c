#include <stdio.h>

int Sum(int a, int b) {
    int result;
    
	result = a + b;
    
    return result;
}

int main(void)
{
    int result = 0, a = 1, b = 2;
    
	result = Sum(a, b);
    
	printf(¡°%d¡±, result);
    
    return 0;
}
