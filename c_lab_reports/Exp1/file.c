
// 1) Hello World
//#include <stdio.h>
//int main(){
//    printf("Hello World\n");
//    return 0;
//}

//// 2) Address in multiple lines
//#include <stdio.h>
//int main(){
//    printf("House 12\nStreet ABC\nCity XYZ\n");
//    return 0;
//
//}

// 3) Name & age prompt
//#include <stdio.h>
//int main(){
//    char name[50]; int age;
//    printf("Enter name: "); scanf("%49s", name);
//    printf("Enter age: "); scanf("%d", &age);
//    printf("Hello %s, age %d\n", name, age);
//    return 0;
//}

// 4) Add two numbers
#include <stdio.h>
int main(){
    int a,b; printf("Enter two integers: ");
    if(scanf("%d %d", &a, &b)==2) printf("Sum = %d\n", a+b);
    else printf("Invalid input\n");
    return 0;
}

