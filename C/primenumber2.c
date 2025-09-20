
#include <stdio.h>

int main()
{
   int var,i;
   int count=0;
   printf("Enter an Number to get Divisor : ");
   scanf("%d",&var);
   
   for(i=1;i<=var;i++){
       if( var % i == 0){
           count++;
   }
   }
   if(count == 2){
       printf("%d is a prime Number : ",var);
   }else{
       printf("%d is a not a prime Number",var);
       
   }
   

    return 0;
}
