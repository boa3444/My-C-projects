#include <stdio.h>
#include <stdlib.h>

int count_digits(int integer)
{
		int count = 0;
		while (integer!= 0)
		{
			integer /= 10;
			count += 1;
			}
	return count;
		}
		
int power(int base ,int exponent)
{
	int result = 1;
	for ( int y= 0; y < exponent;y++)
	{
		result *= base;
		}
	return result;
	}
	
	
int is_armstrong(int input)
{
	int remainder = 0, f_result = 0, sum=0;
	int org_num = input;
	int digits = count_digits(input);
	
	while (org_num > 0)
	{
		
		remainder = org_num % 10;
		f_result =  power(remainder, digits);
		//printf("%d", f_result);
		sum += f_result;
		org_num /= 10;
	}
	return sum == input;
}

int main()
{
	   int user_input = 0, flag= 0;
	   scanf("%d", &user_input);
	   // first part
	   /*for (int i = 0; i < 500; i++){
	   	if (is_armstrong(i)){
	   		printf("%d\n", i);
	   		}
	   		}
	   		*/
	   		
	   //second part
	   for (int test_num = 0; flag < user_input; test_num++)
	   {
	   	if (is_armstrong(test_num))
	   	{
	   		printf("%d\n", test_num);
	   		flag += 1;
	   			}
	   		
	   				}
	   	return 0;
	   	
	   	
	   		}
	   	
	   
