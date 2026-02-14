This C program converts a given infix expression into postfix form and then evaluates the postfix expression using the stack data structure. It supports operators + - * /, parentheses, and single-digit operands.

# Data Structures

Two stacks are used:

Character Stack

char stack[MAX];
int top = -1;


Used during infix-to-postfix conversion to store operators and parentheses.

## Integer Stack

int st[MAX];
int t = -1;


Used during postfix evaluation to store operands.

Both stacks follow the LIFO (Last In First Out) principle.

## Functions

push(char x)
Pushes an operator or parenthesis onto the stack.

pop()
Removes and returns the top element from the stack.

priority(char x)
Returns operator precedence (+ - = 1, * / = 2).

evalPostfix(char postfix[])
Evaluates the postfix expression by:

Pushing operands onto the integer stack

Popping two values when an operator appears

Performing the operation

Pushing the result back
The final value is returned.

main() Method

The main() function:

Reads the infix expression

Converts infix to postfix using stack and precedence rules

Displays the postfix expression

Evaluates the postfix expression

Prints the final result

# Sample Output:

## Input

3+5*(2-4)


## Output

Postfix expression: 3524-*+
Evaluated result: -7

# Conclusion

This program demonstrates stack usage for expression conversion and evaluation.