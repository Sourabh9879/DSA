#include <stdio.h>

int main()
{
   int n;
   int count=0;
   printf("Enter integer to reverse :");
   scanf("\n%d",&n);
   while( n > 0){
       int lastdigit = n % 10;
       count++;
       printf("%d",lastdigit);
       n = n/10;
       
   }
   printf("\ntotal digit in integer are : %d",count);

    return 0;
}