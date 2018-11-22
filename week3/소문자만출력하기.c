#include <stdio.h>

int main(void)
{
	char array[] = "1 a C b D O z";
	
	int i;
	
	for(i=0; i<13; i++)
	{
		if('a'<=array[i] && array[i]<='z')
			printf("%c", array[i]);
	}
	
	printf("\n");
	
	i=0;
	
	while(array[i] != '\0')
	{
		if('a'<=array[i] && array[i]<='z')
			printf("%c", array[i]);
		
		i++;
	}
		
	return 0;
}
