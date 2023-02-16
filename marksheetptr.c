#include<stdio.h>

int main()  {

char a[20];
int r,m,p,c,h,e;

printf("Name Of the Student = ");
fgets(a,20,stdin);

printf("Student Roll No. = ");
scanf("%d",&r);

printf("Mathematics = ");
scanf("%d",&m);

printf("Physics = ");
scanf("%d",&p);

printf("Chemistry = ");
scanf("%d",&c); 

printf("Hindi = ");
scanf("%d",&h);

printf("English = ");
scanf("%d",&e);

float total  = m+p+c+h+e;

printf("Total Marks = %f\n",total);

float per = total/5;    

printf("Percentage = %f\n",per);

float* t = &total;

printf("The address of total = %p\n",t);

printf("the value of t = %f\n",&total);

int* maths = &m;
 
printf("the address of m = %p\n",m);

printf("the value of m = %d\n",*maths);

    return 0;
}