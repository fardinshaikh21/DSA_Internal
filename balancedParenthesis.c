#include <stdio.h>
#include <string.h>
#define MAX 100 

char stack[MAX];
int top = -1;

void push(char ch){
    if(top == MAX - 1){
        printf("Stack Overflow\n");
    }else{
        stack[++top] = ch;
        // printf("Pushed element: %c\n", ch);
    }
}

char pop(){
    if(top == -1){
        printf("Stack Underflow\n");
    }else{
        return stack[top--];
    }
}

char peek(){
    if(top==-1){
        printf("Stack Underflow\n");
    }else{
        return stack[top];
    }
}   


int isEmpty(){
    return top == -1;
}

int balencedParenthesis(char expression[]){

    for(int i=0;i<strlen(expression);i++){

        char ch = expression[i];

        switch(ch){
            case '(': 
            case '{': 
            case '[':
                push(ch);
                break;

            case ')':
                if(isEmpty() || peek() != '('){
                    return 0;
                }
                    pop();
                    break;   
            case '}':
                if(isEmpty() || peek() != '{'){
                    return 0;
                }
                    pop();
                    break;
                      
            case ']':
                if(isEmpty() || peek() != '['){
                    return 0;
                }
                    pop();
                    break;
        }
      
    }

    return isEmpty();
}


int main(){
    char expression[MAX];

    printf("Enter an expression: ");
    scanf("%s", expression);

    if(balencedParenthesis(expression)){
        printf("The Parenthesis are balanced\n");
    }else{
        printf("The Parenthesis are not balanced\n");
    }

    return 0;
}