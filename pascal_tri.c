#include <stdio.h>


 		
 int main(){
 	int input = 0;
 	int number = 0;
 	printf("Type the number of lines you want in your triangle");
 	scanf("%d", &input);
 	for ( int p = 1 ; p<= input; p++){
	 	for(int i =0;i< p; i++){
	 		number += 1;	
	 		printf("%d", number );
	 		
	 		}
	 	printf("\n");
 		//numb +=1;
 		
 		}
 	return 0;
 	}
