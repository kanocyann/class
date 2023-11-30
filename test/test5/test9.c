#include <stdio.h>
void rotateRight(int arr[], int size, int k);
int main(void)
{
    int myArray[] = {1, 2, 3, 4, 5};
    int size = sizeof(myArray) / sizeof(myArray[0]);
    int k;
    printf("Input k: ");
    scanf("%d", &k);
    rotateRight(myArray, size, k);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", myArray[i]);
    }
    printf("\n");
    return 0;
}
void rotateRight(int arr[], int size, int k)
{
    int temp[k];
    for (int i = size - k, j = 0; i < size; i++, j++)
    {
        temp[j] = arr[i];
    }
    for (int i = size - 1; i >= k; i--)
    {
        arr[i] = arr[i - k];
    }
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
}
