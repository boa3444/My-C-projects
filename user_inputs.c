#include <stdio.h>
#include <string.h>

int main(){
	int arr[100]= {};
	int i = 0,length,input;
	length = sizeof(arr)/ sizeof(arr[0]);
	for (;i<length;i++){
		input = scanf("%d%c", &arr[i],&check);
		printf("", check);
		}

	return 0;
	}
