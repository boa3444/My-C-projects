#include <stdio.h>
#include <stdlib.h>

int main(){
	char arr[6]= { 1,2,5,10,50,100};
	int *gaddi;
	int gaddi_ke_note = 0;
	int sum = 0 ;
	int input =0;
	int count = 0 ;
	int note_number = 0;
	scanf("%d" , &input);

	for ( int i = 5 ; i>= 0 ;)
	
	{
		
		if (! ( sum + arr[i] > input))
		{
			sum += arr[i];
			count += 1;
			if ( sum == input)
			{
				//printf("%d" , count);
				break;
			}
			
		}
		else
			i--;
	}
	sum = 0 ;
	gaddi = (int*)malloc( count * sizeof(int));
	gaddi_ke_note = count;

	for ( int index = 5 ; index>= 0 ; )
	{
			if (!( sum + arr[index]> input ))
			{
				sum += arr[index];
				gaddi[note_number]= arr[index]; 
				note_number++;
				if ( sum == input)
				{
					
					break;
				}
				
			}
			else
				index--;
	}
	
	
	printf("Smallest number of notes that will combine to give your rupee %d : %d (", input , count);
	for ( int temp = 0 ; temp < gaddi_ke_note ; temp++)
	{
		printf("%d " , gaddi[temp]);
	}
		
	printf(")");
	
	return 0 ;
	}
