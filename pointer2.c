#include<stdio.h>


int main(){

   int a[] = {1,2,3,4,5};
   int* c= &a[3];
   printf(" Address of a = %p\n",&a[3]);
   printf("Value of a = %d\n",a[3]);
   printf("Value of c = %d\n",*c);
   printf("Address of c = %p",c);



    return 0;
}