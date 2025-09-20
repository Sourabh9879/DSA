
#include <stdio.h>

    int count=0;
void recursion(){
    if(count == 3){
        return;
    }else{
        printf("Hello\n");
        count++;
    }
    recursion();
}

int main()
{
  recursion();
    return 0;
}
