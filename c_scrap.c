#include <stdio.h>

int calculateSum(int x, int y) {
  return x + y;
}

int main() {
  // Create an array
  //int resultArr[6];
  int num1 ;
  int num2;

  int result;
    //int length = sizeof(resultArr) / sizeof(resultArr[0]);
  

  // Call the function with different arguments and store the different results in the array
//
    printf("Choose a num: ");
    scanf("%d", &num1);
    printf("Choose another num:");
    scanf("%d", &num2);
    
 
  //for (int i = 0; i < length; i++) {

 	//resultArr[i] = calculateSum(num1, num2);
  result = calculateSum(num1, num2);
  printf("Result is = %d", result);
  

  return 0;
}