#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define from 5
#define to 20

int main(){
	srand(time(NULL));
	int length = 0, flag = 1, total_dupl = 0;
	length = rand() % 15 + 5; 
	int *arr =  malloc(length * sizeof(int));
	
	//printf("%d", length);
	for (int i = 0; i < length ; i++){
		arr[i] = rand() % 100 +1;
		printf("%d\n", arr[i]);
		}
	
	for (int x = 0; x <length && flag ==1 ; x++){
		for (int y = 0; y < length ;y++){
			if (y!=x){
				if (arr[x]== arr[y]){
				//printf("Found a duplicate");
				flag = 0;
				total_dupl += 1;
				break;
				}
				
				}
			
				
	}
	}
	
	if (total_dupl == 0)
		printf("No duplicates found");
	else
		printf("Total duplicates:%d", total_dupl);
		
	free(arr);
	return 0 ;
	
	}
	
