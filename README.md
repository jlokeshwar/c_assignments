// sum of function
#include <stdio.h>

 int add(int ,int );
 
 int main()
 {
     int m=10,n=20,sum;
     sum = add(m,n);
     printf("sum of %d",sum);
     return 0;
 }
 
 int add(int a,int b)
 {
     return (a+b);
 }
