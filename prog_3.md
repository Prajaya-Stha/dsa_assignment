# Reverse Traversal of Singly Linked List (C)
## Explanation of How the Data Structures Are Defined

The program uses a singly linked list. Each node contains an integer value and a pointer to the next node.

struct Node {
    int data;
    struct Node* next;
};


data stores the integer value.

next stores the address of the next node.

Nodes are dynamically allocated and connected sequentially.

## Description of the Functions Implemented, Including Their Purpose
createNode(int value)

Creates a new node, assigns the given value, and initializes the next pointer to NULL.

insertEnd(struct Node** head, int value)

Adds a new node at the end of the linked list.

reverseList(struct Node** head)

Reverses the linked list using three pointers (prev, curr, next) and updates the head pointer.

display(struct Node* head)

Traverses the list and prints all node values.

## Overview of How the main() Method Is Organized

The main() function demonstrates the reverse traversal process:

Initializes an empty linked list.

Inserts elements (10, 20, 30, 40).

Displays the original linked list.

Calls reverseList() to reverse the list.

Displays the reversed linked list.

## Sample Output of a Complete Run of the Program
Original List:
10 -> 20 -> 30 -> 40 -> NULL

Reverse Traversal:
40 -> 30 -> 20 -> 10 -> NULL

## Conclusion

This program demonstrates reverse traversal by reversing node links in a singly linked list
