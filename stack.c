#include <stdio.h>
#define MAX 5

int top = -1;
int stack[MAX];

void push(int value){
    if(top == MAX - 1){
        printf("Stack Overflow\n");
    }else{
        top++;
        stack[top] = value;
    }
}

void pop(){
    if(top == -1){
        printf("Stack Underflow\n");
    }else{
        printf("Popped element: %d\n", stack[top--]);
    }
}

void peek(){
    if(top==-1){
        printf("Stack Underflow\n");
    }else{
        printf("Top element: %d\n", stack[top]);
    }
}

void isEmpty(){
    if(top == -1){
        printf("Stack is empty\n");
    }else{
        printf("Stack is not empty\n");
    }
}

void isFull(){
    if(top==MAX-1){
        printf("Stack is Full\n");
    }else{
        printf("Stack is not Full\n");
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty\n");
    }else{
        printf("Stack elements:\n");
        for(int i=top;i>=0;i--){
            printf("%d\n", stack[i]);
        }
    }
}


int main(){

    push(10);
    push(20);
    push(30);
    push(40);
    display();
    peek();

    pop();
    display();
    peek();
    isEmpty();
    isFull();
    display();

    return 0;
}