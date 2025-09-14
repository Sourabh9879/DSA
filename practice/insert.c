#include<stdio.h>

void main(){
    int arr[] = {2,4,3,1,6,5};
    int i,j,n,k,key;
    n = sizeof(arr) / sizeof(arr[0]);

    for(i=1;i<n;i++){
        j = i;
        while( j>0 && arr[j-1] > arr[j]){
            key = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = key;
            j--;

        }

    }
      for(int k =0;k<n;k++){
        printf("%d",arr[k]);
    }
}