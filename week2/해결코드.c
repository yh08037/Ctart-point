#include <stdio.h>

int main(void)
{
    int number;
    char character;
    
    scanf("%d", &number);
    getchar();
    scanf("%c", &character);
    
    printf("%d", number);
    printf("%c", character);
    
    return 0;
}
