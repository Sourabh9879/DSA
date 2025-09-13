// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int x = 10;
   
   int *ptr;
   ptr = &x;
   
   printf("%d",x);
   printf("\n%d",&x);
   printf("\n%d",*ptr);

    return 0;
}