#include <stdio.h>
#include <stdlib.h>
void readInput(int *arr, int n);
void reverseOrder(int *arr, int n);
void printReverse(int *arr, int n);
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    readInput(arr, n);
    reverseOrder(arr, n);
    printReverse(arr, n);
    free(arr);
    return 0;
}
void readInput(int *arr, int n)
{
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}
void reverseOrder(int *arr, int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printReverse(int *arr, int n)
{
    printf("Reversed order:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
