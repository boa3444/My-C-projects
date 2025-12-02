#include <stdio.h>
#include <string.h>
//
//struct data
//{
//	int age ;
//	char haha[4];
//}s1={
//	2,
//	"sweet"
//	}

//struct virus
//{
//	int size;
//	char bytes[40];
//}v[2]=
//	{
//		3,"hello" , 5, "haha"
//	};


int main()
{
//	struct Details
//	{
//		int age;
//		char name[50];
//		char add[50];
//	};
//	struct Details d;
//
////	printf("%p , %p, %p", &d.age, d.name,d.add);
//	struct data
//	{
//		int numb;
//		int name[30];
//	};
//
//	struct data d, *ptrd;
//	ptrd = &d;
//	strcpy(d.name, "hello");
//	d.numb=3;
//	printf("%d %s" , (*ptrd).numb, (*ptrd).name);
//
//	struct data s2,s3;
//	s2=s1;
//	s3=s2;
//	printf("%d , %s" ,*(&s2.age), s3.haha);
//	printf("%d %s" , v[0].size, v[0].bytes);
//	struct data
//	{
//		int age;
//		char koala[10];
//	}d;
//	d= { "hello" , 10};
//	printf("%d %s" , d.age, d.koala);
	struct time
	{
		int second;
	}t;
	struct time *ptr;
	ptr = &t;
	t.second=4;
	printf("%d %d" , ptr->second,(*ptr).second);
	return 0;
}
