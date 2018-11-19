#include <stdio.h>

void sortion(int * a, int n){
	int i, j, min_index, temp;
	for(i=0; i<n; i++){
		min_index = i;
		for(j=i+1; j<n; j++){
			if(a[min_index]>a[j]){
				min_index = j;
			}
		}
		temp = a[min_index];
		a[min_index] = a[i];
		a[i] = temp;
	}
}

int main(void)
{
	int i, arr[] = {1,6,5,3,7};
	
	sortion(arr, 5);
	
	for(i=0; i<5; i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
