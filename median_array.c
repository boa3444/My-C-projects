#include<stdio.h>

int main(){
	int arr1[] = {1,2,7,8,7};
	int arr2[] = {1,0};
	int combined_arr[7]= {};
	int length1 = sizeof(arr1)/ sizeof(arr1[0]);
	int length2 = sizeof(arr2)/ sizeof(arr2[0]);
	int index1 = 0;
	int index2 = 0;
	int index = 0;
	int th_var = 0;
	int count = 0 ;
	int median = 0;
	
	
	// COMBINED ARRAY
	
	while (index2 < length2)
	{
		combined_arr[index] = arr2[index2];
		index += 1;
		index2 += 1;
		}
	
	
	while (index1 < length1 )
	{
		combined_arr[index] = arr1[index1];
		index += 1;			
		index1 += 1;
		}
		
	int length = sizeof(combined_arr)/ sizeof(combined_arr[0]);
	
	printf("Initial array:");
	for (int i = 0; i < length; i++){
		printf("%d,", combined_arr[i]);
		
		}  
	printf("\n");
		
	// ASCEND ARRAY
	int org_length = length;
	
	while (org_length != 0)
	{
		index = 0;
		count = 0;
		for (; count < org_length;count++)
		{
			if (combined_arr[index] > combined_arr[index + 1])
			{
				th_var = combined_arr[index + 1] ;
				combined_arr[index + 1] = combined_arr[index];
				combined_arr[index] = th_var;
				
				
								}
			 
			index += 1;
			
			if (index == (org_length  -1)){
				break;
				} 
					 	
					 	}
		org_length-=1;

			}
					 	
		
		
	printf("Ascended array:");
			
	for ( int x = 0 ;x < length;x++)
	{
	printf("%d,", combined_arr[x]);
	}
	printf("\n");
	if (length %2 == 0)
	{
		median = (combined_arr[(length / 2) - 1]+ combined_arr[((length /2))]) /2;
		
		
			}
			
	else if (length %2 != 0)
	{
		median = (combined_arr[(length/2) ]);
		
		
		}
	
		
	printf("Median: %d", median);		
				
			
			
			
	

	return 0 ;
	}
