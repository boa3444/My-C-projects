#include <stdio.h>

int main(){
	int ages[] = {20,30,40,50};
    int age =0;
    int length = sizeof(ages) / sizeof(ages[0]);
    //int loopcount = 0;
    int i ;
    for (i= 0; i < length ; i+=1){
    	age += ages[i];
        //i+= 1;
        }
        
    float average = (float) (age / length);
        
    printf("%f", average);
    return 0 ;
    }
    