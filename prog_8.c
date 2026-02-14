#include <stdio.h>
#include <stdlib.h>
#include <time.h>

long comparisons = 0;
long swaps = 0;


void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
    swaps++;
}

/* Bubble Sort */
void bubbleSort(int a[], int n) {
    for(int i=0;i<n-1;i++) {
        for(int j=0;j<n-i-1;j++) {
            comparisons++;
            if(a[j] > a[j+1]) {
                swap(&a[j], &a[j+1]);
            }
        }
    }
}

/* Selection Sort */
void selectionSort(int a[], int n) {
    for(int i=0;i<n-1;i++) {
        int min=i;
        for(int j=i+1;j<n;j++) {
            comparisons++;
            if(a[j] < a[min])
                min=j;
        }
        if(min!=i)
            swap(&a[i], &a[min]);
    }
}

/* Insertion Sort */
void insertionSort(int a[], int n) {
    for(int i=1;i<n;i++) {
        int key=a[i];
        int j=i-1;
        while(j>=0) {
            comparisons++;
            if(a[j]>key) {
                a[j+1]=a[j];
                swaps++;
                j--;
            } else break;
        }
        a[j+1]=key;
    }
}

/* Merge Sort */
void merge(int a[], int l, int m, int r) {
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;

    int L[1000], R[1000];

    for(i=0;i<n1;i++) L[i]=a[l+i];
    for(j=0;j<n2;j++) R[j]=a[m+1+j];

    i=j=0;
    k=l;

    while(i<n1 && j<n2) {
        comparisons++;
        if(L[i]<=R[j])
            a[k++]=L[i++];
        else
            a[k++]=R[j++];
    }

    while(i<n1) a[k++]=L[i++];
    while(j<n2) a[k++]=R[j++];
}

void mergeSort(int a[], int l, int r) {
    if(l<r) {
        int m=(l+r)/2;
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}

/* Display */
void display(int a[], int n) {
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
    printf("\n");
}

int main() {
    int n, choice;

    printf("Enter N: ");
    scanf("%d",&n);

    int a[1000];

    srand(time(NULL));

    for(int i=0;i<n;i++)
        a[i]=rand()%1000+1;

    printf("\nBefore Sorting:\n");
    display(a,n);

    printf("\nChoose Sorting Algorithm:\n");
    printf("1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Merge Sort\n");
    scanf("%d",&choice);

    comparisons=0;
    swaps=0;

    switch(choice) {
        case 1: bubbleSort(a,n); break;
        case 2: selectionSort(a,n); break;
        case 3: insertionSort(a,n); break;
        case 4: mergeSort(a,0,n-1); break;
        default: printf("Invalid choice"); return 0;
    }

    printf("\nAfter Sorting:\n");
    display(a,n);

    printf("\nComparisons: %ld\n",comparisons);

    if(choice!=4)
        printf("Swaps: %ld\n",swaps);
    else
        printf("Swaps: Not applicable for Merge Sort\n");

    return 0;
}
