
#include <stdio.h>
#define max 5

int queue[max];
int front = -1;
int rear = -1;

void enqueue(int val){
    if(rear == max - 1){
        printf("queue overflow cannot push\n");
    }
    else{
        if(front == -1) front = 0;
        rear++;
        queue[rear] = val;
        printf("%d Enqueue into the Queue\n",val);
    }
}

void dequeue(){
    if(front == -1 || front > rear){
        printf("Queue underflow cannot pop\n");
    }else{
        printf("%d dequeue from the queue\n",queue[front]);
        front++;
    }
}

void display(){
    if(front == -1 || front > rear){
        printf("Queue empty!\n");
    }else{
       for(int i = front; i<=rear;i++){
        printf("%d",queue[i]);
       }
       printf("\n");
    }
    
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);

    display();
    
    dequeue();
    display();
    return 0;
}