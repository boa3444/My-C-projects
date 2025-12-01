#include <stdio.h>

int counter=0;   // global thingy

void up()
{
counter=counter+1;
printf("now counter is %d\n",counter);
}

void down( )
{
   counter = counter - 1 ;
printf("after down its %d\n", counter );
}

void reset()
{
counter=0;
   printf("reset done now counter=%d\n",counter);
}

int main()
{
printf("start value: %d\n",counter);
up();
up( );
down();
reset( );
up();
printf("final counter is %d\n",counter);
return 0;
}
