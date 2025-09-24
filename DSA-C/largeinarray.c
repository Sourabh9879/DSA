#include <stdio.h>

void main(){
    int var=0;
    int i;
    int arr[] = {3,4,9,6,8,5,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(i=0;i<n-1;i++){
        if(arr[i] > var ){
            var = arr[i];
        }
    }
    printf("%d",var);

}