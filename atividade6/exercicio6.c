// Program to reverse the array using function

#include <stdio.h>
void sortArray(int *arr, int start, int end) 
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
int main()
{
    int arr[] = {70, 90, 1, 3, 0, 100, 2};

    int n = sizeof(arr) / sizeof(arr[0]); // calculating size of the array

    printArray(arr, n); // To print original array

    sortArray(arr, 0, n - 1); // Calling the function with array name, starting point and ending point

    printf("Reversed array is\n");

    printArray(arr, n); // To print the Reversed array

    return 0;
}