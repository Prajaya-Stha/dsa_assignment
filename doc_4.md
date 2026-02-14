# Doubly Linked List Implementation in C


## Explanation of How the Data Structures Are Defined

The program uses a doubly linked list. Each node contains an integer value and two pointers: one pointing to the previous node and another pointing to the next node.

struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};


data stores the integer value.

prev stores the address of the previous node.

next stores the address of the next node.

Nodes are dynamically allocated using malloc() and linked together in both forward and backward directions.

## Description of the Functions Implemented, Including Their Purpose
createNode(int value)

Creates a new node, assigns the given value, and initializes both prev and next pointers to NULL.

insertEnd(struct Node** head, int value)

Inserts a new node at the end of the doubly linked list.

insertAfter(struct Node* head, int key, int value)

Inserts a new node with the given value after the node containing key.
It updates both forward (next) and backward (prev) links.

deleteNode(struct Node** head, int key)

Deletes the node containing the given key value.
The adjacent nodes are reconnected properly before freeing memory.

display(struct Node* head)

Traverses the list from head to end and prints all node values.

## Overview of How the main() Method Is Organized

The main() function demonstrates the operations as follows:

Creates an empty doubly linked list.

Inserts initial elements (10, 20, 30).

Displays the original list.

Calls insertAfter() to insert 25 after 20.

Displays the updated list.

Calls deleteNode() to delete 30.

Displays the final list.

This shows both insertion and deletion in a doubly linked list.

(d) Sample Output of a Complete Run of the Program
Original List:
10 <-> 20 <-> 30 <-> NULL

After inserting 25 after 20:
10 <-> 20 <-> 25 <-> 30 <-> NULL

After deleting 30:
10 <-> 20 <-> 25 <-> NULL

## Conclusion

This program demonstrates how a doubly linked list can be implemented using structures in C. It shows insertion after a given node and deletion of a node while maintaining both previous and next links.