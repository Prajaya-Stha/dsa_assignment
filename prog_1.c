#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;


void push(char ch) {
    stack[++top] = ch;
}

char pop() {
    return stack[top--];
}


int isBalanced(char expr[]) {
    int i;
    char x;

    for (i = 0; i < strlen(expr); i++) {

        
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[') {
            push(expr[i]);
        }

        
        if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']') {
            if (top == -1)
                return 0;   

            x = pop();

            if ((expr[i] == ')' && x != '(') ||
                (expr[i] == '}' && x != '{') ||
                (expr[i] == ']' && x != '['))
                return 0;
        }
    }

   
    return (top == -1);
}

int main() {
    char expr[MAX];

    printf("Enter expression: ");
    scanf("%s",expr);   

    if (isBalanced(expr))
        printf("Balanced Parentheses\n");
    else
        printf("Not Balanced Parentheses\n");

    return 0;
}
