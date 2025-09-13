#include<stdio.h>
int main()
float p = 100000.0;
int n;
for(n=1;n<=10;n++){
p = p * (1+(10.0/100));

printf("%d\t%f\n", n, p);
}
return 0;
}
