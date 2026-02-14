# Sorting Random Integers Using Multiple Algorithms
## Explanation of How the Data Structures Are Defined

An integer array is used to store the randomly generated numbers.

int a[1000];


The size N is entered by the user at runtime. Two global variables are defined to count the total number of comparisons and swaps:

long comparisons = 0;
long swaps = 0;


These variables help analyze the performance of each sorting algorithm.

## Description of the Functions Implemented
swap()

Swaps two integer values and increments the swap counter.

bubbleSort()

Repeatedly compares adjacent elements and swaps them if they are in the wrong order.

selectionSort()

Finds the minimum element from the unsorted portion and places it at the beginning.

insertionSort()

Builds the sorted list one element at a time by shifting larger elements to the right.

mergeSort()

Uses the divide-and-conquer technique to recursively split the array and merge sorted parts.

merge()

Combines two sorted subarrays into one sorted array.

display()

Prints the array elements.

## Overview of the main() Method

Takes input N from the user.

Generates N random integers between 1 and 1000.

Displays the unsorted array.

Prompts the user to choose a sorting algorithm.

Calls the selected sorting function.

Displays the sorted array.

Prints the total number of comparisons and swaps.

## Sample Output
Enter N: 5

Before Sorting:
453 112 890 34 201

Choose Sorting Algorithm:
1. Bubble Sort
2. Selection Sort
3. Insertion Sort
4. Merge Sort
1

After Sorting:
34 112 201 453 890

Comparisons: 10
Swaps: 6