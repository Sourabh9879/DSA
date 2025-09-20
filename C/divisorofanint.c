
#include <stdio.h>

int main()
{
   int var1,i;
   printf("Enter No1 Number to get divisor : ");
   scanf("%d",&var1);
    
    for(i=1;i<=var1;i++){
        if(var1%i == 0){
            printf("\n%d",i);
        }
    }
   

    return 0;
}
