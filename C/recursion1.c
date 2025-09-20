
#include <stdio.h>

    int count=1;
void recursion(){
    if(count == 6){
        return;
    }else{
        printf("%d",count);
        count++;
    }
    recursion();
}

int main()
{
  recursion();
    return 0;
}
