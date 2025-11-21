#include <stdio.h>
#define MAX 5

int front= -1, rear = -1;
int queue[MAX];

void enqueue(int value){
    if(rear==MAX-1){
        printf("Queue is Full");
    }else{
        if(front==-1){
            front=0;
        }

        queue[++rear] = value;
        printf("Inserted value %d\n",value);
    }
}

void dequeue(){
    if(front==-1){
        printf("\nQueue is Empty");
    }else{
        printf("Dequeue element : %d\n",queue[front]);
        front++;
    }
}

void display(){
    for(int i=front;i<=rear;i++){
        printf("%d ",queue[i]);
    }
    printf("\n");
}

int main(){

    enqueue(20);
    enqueue(10);
    enqueue(40);
    display();

    dequeue();
    display();

    enqueue(60);
    enqueue(50);
    display();

    
    enqueue(5);
    display();

    dequeue();
    display();

    // printf("Front element is: %d\n", queue[0]);
    // printf("Front element is: %d\n", queue[1]);

    return 0;
}