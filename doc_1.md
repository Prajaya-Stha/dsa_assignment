# Balanced Parentheses Checker Using Stack (C)
## Overview

This C program checks whether a given mathematical expression contains balanced parentheses. It supports three types of brackets: (), {}, and []. The program uses a stack data structure to verify proper opening and closing order.

## Data Structures
Character Stack
char stack[MAX];
int top = -1;


Used to store opening brackets while scanning the expression.

stack[] → holds parentheses characters

top → points to the top of the stack

The stack follows the LIFO (Last In First Out) principle.

## Functions

push(char ch)
Pushes an opening bracket onto the stack.

pop()
Removes and returns the top element from the stack.

isBalanced(char expr[])
Checks whether the expression is balanced.

## Working:

If an opening bracket is found, it is pushed onto the stack.

If a closing bracket is found:

The stack is checked for emptiness.

The top element is popped.

The popped bracket is matched with the closing one.

If any mismatch occurs, the function returns 0.

After scanning the full expression, if the stack is empty, it returns 1.

main() Method

The main() function:

Takes the expression as input.

Calls isBalanced() to check validity.

Displays whether the parentheses are balanced or not.

## Sample Output

a + (b − c) ∗ (d
Unbalanced parenthesis

m + [a − b ∗ (c + d ∗ {m)]
Unbalanced parenthesis

a + (b − c)
Balanced Parentheses

## Conclusion

This program demonstrates stack usage for validating parentheses in an expression.