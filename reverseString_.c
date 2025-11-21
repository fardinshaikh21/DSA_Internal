#include <stdio.h>
#include <string.h>

int top = -1;
char stack[100];

void push(char c){
    stack[++top] = c;
}

char pop(){
    return stack[top--];
}

char peek(){
    return stack[top];
}   

int isEmpty(){
    return top == -1;
}

int main(){

    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Original string: %s\n", str);
    for(int i=0; i<strlen(str); i++){
        push(str[i]);
    }

    printf("Reversed string: ");
    while(!isEmpty()){
        printf("%c",pop());
    }
    return 0;
}