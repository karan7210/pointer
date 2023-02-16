#include<stdio.h>

int main()  {

int a,b;

printf("enter the value of a =");
scanf("%d",&a);

printf("enter the value of b =");
scanf("%d",&b);

int c = a+b;

int* x = &b;

printf("the value of c = %d\n",c);

int* d = &c;

int* e = &a;

printf("the address of c is = %p\n",&c);

printf("the address of a = %p\n",e);

 printf("the address of b = %p\n",x);

 printf("the value of b is = %d\n",*x);

printf("the value of c is = %d\n",*d);

printf("the address of e is = %p\n",&e);

 printf("the value of a is = %d\n",a);

    return ;
}