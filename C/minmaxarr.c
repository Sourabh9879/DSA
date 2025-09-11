
#include <stdio.h>

int main()
{
    int arr[] = {2,4,1,5,6};
    
    int min = arr[0];
    int max = arr[0];
    int l = sizeof(arr) / sizeof(arr[0]);
    
    for(int i = 0;i<l;i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("Minimum : %d",min);
    printf("\nMaxmum : %d",max);

    return 0;
}
