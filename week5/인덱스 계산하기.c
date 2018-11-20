#include <stdio.h>

int main(void)	
{
	int move, i;
    char direction, str[] = "abcde";
    scanf("%c %d", &direction, &move);
    if(direction == 'L'){
        move = 5 - move;
    }
	char newstr[6];
    for (i=0; i<=4; i++) {
        newstr[(move+i)%5] = str[i];
    }
    printf("%s", newstr);

	/*
	char str[6] = "abcde";   //배열크기가 6인 이유는 배열 맨 끝에 끝을 알리는 \0때문.
	int i, j;
	char d ;
	scanf("%c",&d);
	scanf("%d",&i);
	if (d=='L')
	   i=5-i;    //i=글자 수-i를 한 것임.
	char temp[6];
	for (j = 0; j < 5; j++)     //마찬가지로 글자 수-1만큼 인덱스 생성
	{
	temp[(j + i)%5] = str[j];    //입력받은 i가 글자 수가 될 때 제자리가 되므로 %글자 수
	}
	printf("%s", temp);
*/
    return 0;
}
