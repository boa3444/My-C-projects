#include <stdio.h>

int main(){
	int hour, flag = 0 ;
	printf("24 HOURS IN A DAY\n");
	for ( hour = 1 ; ; hour ++)
	{
		if ( hour < 12 && flag == 0)
			printf("%d A.M.\n", hour);
		
		if ( hour == 12  && flag == 0)
		{
			printf("%d noon\n" , hour);
			flag += 1;
			hour = 1;
		}
		
		if ( hour < 12 && flag == 1)
			printf("%d P.M.\n" , hour);
		
		if ( hour == 12 && flag == 1)
		{
			printf("%d midnight\n" , hour);
			break;
		}
		
		
	}
	return 0 ;
	
	}
