#include <stdio.h>

int main(){
	int space = 0 , line = 0 , number = 1;
	printf("Type the number of lines you wanna print:");
	scanf("%d" , &line);
	int og_line = line;
	int num_ref = line - 1 ;
	for ( ; line > 0 ; line--)
	{
		for ( int space = 0 ; space < line - 1 ; space++)
		{
			printf(" ");
			//times += 1;
		}
		
		for ( int count = 0; count < (og_line - num_ref) ; count++)
		{
			printf("%d " ,number);
			number++;
			//num_ref--;
		}
		
		num_ref--;
		printf("\n");
		
	}
	return 0 ; 
}

// Better the space logic
