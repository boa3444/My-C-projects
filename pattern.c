#include <stdio.h>


int main(){
	
	int flag = 1;
	
	for(int count = 7; count>0; count--){
		int s = 6;
		int i = 1;
		flag = 1;
		
	
			
		for (; i<8 && flag == 1; ){
			
			if ( i > count){
				printf(" ");
				}
			else if ( i <= count)
			{
				printf("%d", i);
			}
			
			i++;
			
			
			if (i ==8){
				//printf("\n");
				for (; s>0; s--){
					if (s > count){
						printf(" ");
						}
					else
					printf("%d", s);
					if ( s==1){
						printf("\n");
						flag = 0;
						i=1;
						break;
						}
					}

				}
				
			}
			
		}
		
					
		return 0;
		}
