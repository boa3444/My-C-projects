#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define min 5
#define max 20




int main(){
	int length = 0;
	int empty = 0;
	int i =0;
	int count = 0;
	srand(time(NULL));
	printf("Type number of elements (min size %d, max size %d): ", min  , max);
	scanf("%d", &length);
	int *arr = malloc(sizeof(int) * length);
	for (int i = 0; i < length; i++){
		arr[i] = rand() % 100 + 1;
		}
	
	printf("OUR RANDOM ARRAY OF INTEGERS: ");
	for (int element = 0; element < length ; element++){
		printf("%d ", arr[element]);
		}
	
	int org_length = length;
	while (org_length != 0)
	{
		count= 0;
		for (int index = 0; index < org_length-1; index++)
		{
			if (arr[index] > arr[index + 1])
			{
				count++;
				empty = arr[index];
				arr[index ] = arr[index+ 1];
				arr[index + 1] = empty;
							}
			
								}
							
		if (count ==0){
			
			break;
					}
		org_length -= 1;		
					
					}
				
			
			
			
			
	printf("\nASCENDED VERSION OF IT:\n");
	for (int p= 0; p <length; p++){
		printf("%d ", arr[p]);
			}
			
	return 0;
	
	}
