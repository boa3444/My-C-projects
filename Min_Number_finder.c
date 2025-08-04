#include <stdio.h>

int main() {
  int ages[] = {120, 545, 60, 70};
  int lowestage = ages[0];
  int length = sizeof(ages) / sizeof(ages[0]);
  int i;

  for (i=0; i < length ; i +=1){
  	if (lowestage > ages[i]){
    
    lowestage = ages[i];
    } 
    
  }
  printf("%d", lowestage);

  return 0;
  }