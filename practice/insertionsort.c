#include <stdio.h>

void main(){
    
    int arr[] = {2,3,5,4,1,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 1;i<n;i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            int key = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = key;
            j--;
        }
    }
    
    printf("Sorted Array\n");
    for(int k =0;k<n;k++){
        printf("%d",arr[k]);
    }
}