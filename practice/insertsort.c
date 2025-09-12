#include <stdio.h>

void main(){
    int i,j,key;
    int a[] = {3,6,4,8,7,0,9};
    int n = sizeof(a) / sizeof(a[0]);
    
    for(i=1;i<n;i++){
        key = a[i];
        j = i - 1;
        while( j>= 0 && a[j] > key){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
    }
    for(int k = 0; k<n; k++){
    printf("%d",a[k]);
}
    
}