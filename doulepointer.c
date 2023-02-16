#include<stdio.h>


int main(){
   
    int a = 10;
    
    int* b ;
    b = &a;

    int** c;
    c  = &b;
    

   printf("The value of b is = %d\n",*b);

   printf("The address of b is = %p\n",b);

   printf("The value of C is =%d\n",**c);
   
   printf("The address of c is = %p\n",c);

    









      
    
      
    // int a = 10;
    
    // int* b ;
    // b = &a;

    // int** c ;
    //   c = &a;

    

      






    // printf("Value of b =%d\n",**c);

    // printf("Address of b = %p\n",c);
    










    return 0;
}