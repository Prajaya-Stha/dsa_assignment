# Building Min Heap and Max Heap from an Unsorted Array 
## Explanation of How the Data Structures Are Defined

The program uses arrays to represent both Min Heap and Max Heap.

int arr[];


The heap is stored in array form where:

Parent index: (i - 1) / 2

Left child: 2*i + 1

Right child: 2*i + 2

Two separate arrays are used to build:

Max Heap

Min Heap

This avoids modifying the original input array.

## Description of the Functions Implemented, Including Their Purpose
swap(int *a, int *b)

Swaps two integer values.

maxHeapify(int arr[], int n, int i)

Maintains the Max Heap property by moving the largest element to the root of a subtree.

minHeapify(int arr[], int n, int i)

Maintains the Min Heap property by moving the smallest element to the root of a subtree.

buildMaxHeap(int arr[], int n)

Builds a Max Heap from an unsorted array by calling maxHeapify() on non-leaf nodes.

buildMinHeap(int arr[], int n)

Builds a Min Heap from an unsorted array by calling minHeapify() on non-leaf nodes.

display(int arr[], int n)

Prints the elements of the heap.

## Overview of How the main() Method Is Organized

The main() function performs the following steps:

Initializes an unsorted array.

Copies the array into two separate arrays for Min Heap and Max Heap.

Calls buildMaxHeap() to construct the Max Heap.

Calls buildMinHeap() to construct the Min Heap.

Displays the original array, Max Heap, and Min Heap.

This demonstrates building both heaps from the same input data.

## Sample Output of a Complete Run of the Program
Original Array:
4 10 3 5 1

Max Heap:
10 5 3 4 1

Min Heap:
1 4 3 5 10

## Conclusion

This program demonstrates how an unsorted array can be converted into Min Heap and Max Heap using heapify operations.