
#include <stdio.h>

int main()
{
    int arr1[] = {10, 20, 30, 40, 50};
    int arr2[] = {15, 25, 35, 45, 55};
    int arr3[10];
    int i=0,j=0,k=0;
    
    int l1 = sizeof(arr1) / sizeof(arr1[0]);
    int l2 = sizeof(arr2) / sizeof(arr2[0]);
    int l3 = l1 + l2;
    
   while (i < l1 && j < l2) {
    if (arr1[i] < arr2[j]) {
        arr3[k] = arr1[i];
        i++;
    } else {
        arr3[k] = arr2[j];
        j++;
    }
    k++;
}
       
    
    
    for(int l = 0;l<l3;l++){
        printf("%d\n",arr3[l]);
    }
    
    
    return 0;
}
