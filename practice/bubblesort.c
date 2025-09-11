
#include <stdio.h>

int main()
{
   int arr[] = {2,3,1,4,5};
   int n = sizeof(arr) / sizeof(arr[0]);
   int i,j;
   for(j=0;j<n-1;j++){
    for(i=0;i<n-1;i++){
       if(arr[i] > arr[i+1]){
           int temp = arr[i];
           arr[i] = arr[i+1];
           arr[i+1] = temp;
       }
    }
   }
   
   for(int i = 0;i<n;i++){
       printf("%d",arr[i]);
   }
    
    
    return 0;
}
