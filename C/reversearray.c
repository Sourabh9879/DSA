
#include <stdio.h>

int main()
{
    int arr[] = {2,4,1,5,6};
    
    int l = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0;i<l/2;i++){
        int temp = arr[i];
        arr[i] = arr[l-i-1];
        arr[l-i-1] = temp;
    }
    
    for(int i = 0;i<l;i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}
