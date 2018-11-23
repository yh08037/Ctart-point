#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    
    printf(“0에서 %d까지의 범위에서 난수 30개를 출력합니다.\n”, RAND_MAX);
    
    for(int i=0; i<30; i++){
        printf("%d", rand());
    }
    
    return 0;
}
