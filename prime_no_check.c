#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	srand(time(NULL));
	int num = 0, i =2, is_it;
	//num = rand() % 100 + 2;
	scanf("%d", &num);
	//printf("%d", num);
	for (;i< num;i++){
		
			if (num % i == 0) {
				is_it = 0;
				break;
			}
			else
				is_it = 1;
				
				}
		
	if (is_it == 1)
		printf("Its a prime numb\n");
	else
		printf("No its not a prime num\n");
		
	
	return 0;
	}
