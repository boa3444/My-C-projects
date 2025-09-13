#include <stdio.h>
#include <stdlib.h>

int power(int x , int y)
{
	return (x*x*x) + (y*y*y);
	}
	
int main(){
	int sum= 0, flag = 0, cube_sum= 0, y= 1, org_y = 1;

	//while ( flag < 20 )
	//{

	for (int num = 1; flag <3 ; num++)
	{	
	
		for ( int i = 1 ; i <= 20; i++)
		{       //y = org_y;
			for ( ;y<= 20; y++)
			{
				sum = power( i , y);
				if ( sum == num )
				{
					//printf("%d\n", num);
					cube_sum+= 1;
					org_y += 1;
					y= org_y;
					break;
					
					}
				}
			
			
			
				
		if (cube_sum == 2)
		{
			printf("%d\n", num);
			flag += 1;
			break;
		}
		
			}
			
		}
		return 0 ;
		
		
		}
		
				
			
			
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
