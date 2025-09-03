
#include <stdio.h>
#define max 5

int stack[max];
int top = -1;

void push(int val){
    if(top == max - 1){
        printf("Stack overflow cannot push\n");
    }
    else{
        top++;
        stack[top] = val;
        printf("%d pushed into the stack\n",val);
    }
}

void pop(){
    if(top == -1){
        printf("Stack underflow cannot pop\n");
    }else{
        printf("%d popped from the stack\n",stack[top]);
        top--;
    }
}

void display(){
    if(top == -1){
        printf("Stack empty!\n");
    }else{
       for(int i = 0; i<=top;i++){
        printf("%d",stack[i]);
       }
       printf("\n");
    }
    
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);

    display();
    
    pop();
    display();
    return 0;
}