
#include <stdio.h>

int main()
{
   int var1,var2,i;
   int gcd =1;
   int count=0;
   printf("Enter No1 Number to get gcd : ");
   scanf("%d",&var1);
   printf("Enter No2 Number to get gcd : ");
   scanf("%d",&var2);
   
   for(i=1;i<= (var1 < var2 ? var1 : var2);i++){
       if(var1%i ==0 && var2%i==0){
           gcd = i;
       }
   }
   printf("%d",gcd);
   

    return 0;
}
