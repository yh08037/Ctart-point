#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
   srand(time(NULL));
   
   int i, j;
   char seat[10][10];
   
   for(i=0; i<10; i++){
      for(j=0; j<10; j++){
         seat[i][j] = (rand()%2) ? 'O' : 'X';
      }
   }
   
      
   while(1){   
      
      char input;
      
      printf("예매하시겠습니까? [Y/N] ");
   
      scanf("%c", &input);
      getchar();
      
      if(input=='N'){
         printf("예매를 종료합니다.\n");
         return 0;
      }
      
      
      for(i=0; i<11; i++){
         for(j=0; j<11; j++){
            if(i==0){
               if(j==0){
                  printf("    ");
               }
               else{
                  printf("%4d", j);
               }
            }
            else{
               if(j==0){
                  printf("%4c", 'A'+i-1);
               }
               else{
                  printf("%4c", seat[i-1][j-1]);
               }
            }
         }
         printf("\n");
      }
      
      char row;
      int column;
      
      while(1){   
         printf("\n좌석을 선택하세요\n");
         
         printf("행 : ");   scanf("%c", &row);
         
         printf("열 : ");   scanf("%d", &column); 
         
         getchar();
         
         if(seat[row-'A'][column-1]=='O'){
            printf("예매완료\n\n"); 
            seat[row-'A'][column-1] = 'X';
            break;
         }
         
         printf("이미 예약된 좌석입니다.\n");
         
      }
   
   }
   return 0;   
}
