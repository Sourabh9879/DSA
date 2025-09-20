
#include <stdio.h>

    int count=5;
void recursion(){
    if(count == 0){
        return;
    }else{
        printf("%d",count);
        count--;
    }
    recursion();
}

int main()
{
  recursion();
    return 0;
}
