#include <stdio.h>
int main(void){

	int Ram= 0;
	int Shyam= 0;
	int Hari = 0;
	int i =0;
	char ages[3] = { 0 , 0, 0};
	
	printf("Type age of Ram:");
	scanf("%d", &Ram);
	ages[0] = Ram;
	printf("Type age of Shyam:");
	scanf("%d", &Shyam);
	ages[1] = Shyam;
	printf("Type age of Hari:");
	scanf("%d", &Hari);
	ages[2] = Hari;
	int youngest= Ram;
	
	for (i=0; i<3; i++){
		//printf("%d\n", ages[i]);
		if (youngest > ages[i]){
			youngest = ages[i];
			
			}
		else {
		youngest = youngest;
		}
		
		}
	printf("Youngest:%d", youngest);
	return 0;
	
	}
	
	
