#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char x) {
    stack[++top] = x;
}

char pop() {
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int priority(char x) {
    if (x == '(') return 0;
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    return 0;
}

int evalPostfix(char postfix[]) {
    int st[MAX];
    int t = -1;

    for (int i = 0; postfix[i] != '\0'; i++) {
        if (isdigit(postfix[i])) {
            st[++t] = postfix[i] - '0';
        } else {
            int b = st[t--];
            int a = st[t--];

            switch (postfix[i]) {
                case '+': st[++t] = a + b; break;
                case '-': st[++t] = a - b; break;
                case '*': st[++t] = a * b; break;
                case '/': st[++t] = a / b; break;
            }
        }
    }
    return st[t];
}

int main() {
    char infix[MAX], postfix[MAX];
    int k = 0;

    printf("Enter infix expression: ");
    scanf("%s", infix);

    for (int i = 0; infix[i] != '\0'; i++) {

        if (isdigit(infix[i])) {
            postfix[k++] = infix[i];
        }

        else if (infix[i] == '(') {
            push(infix[i]);
        }

        else if (infix[i] == ')') {
            while (top != -1 && stack[top] != '(')
                postfix[k++] = pop();
            pop(); 
        }

        else {
            while (top != -1 && priority(stack[top]) >= priority(infix[i]))
                postfix[k++] = pop();
            push(infix[i]);
        }
    }

    while (top != -1)
        postfix[k++] = pop();

    postfix[k] = '\0';

    printf("Postfix expression: %s\n", postfix);

    int result = evalPostfix(postfix);
    printf("Evaluated result: %d\n", result);

    return 0;
}
