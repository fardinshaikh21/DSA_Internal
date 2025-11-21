#include <stdio.h>
#include <string.h>
#define MAX 100

int stack[MAX];
int top=-1;

void push(char ch){
    if(top>=MAX-1){
        printf("Stack Overflow\n");
        return;
    }
    
    stack[++top] = ch;
}

char pop(){
    if(top == -1){
        printf("Stack Underflow\n");
        return '\0';
    }
    
    return stack[top--];
}

int main(){

    char str[MAX];

    printf("Enter a string: ");
    scanf("%s", str);

    for(int i=0; i<strlen(str); i++){
        push(str[i]);
    }

    while(top != -1){
        printf("%c", pop());
    }
    printf("\n");
    return 0;
}