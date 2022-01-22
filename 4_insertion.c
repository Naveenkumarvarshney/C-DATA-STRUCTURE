#include <stdio.h>

void display(int arr[], int n)
{
    // traversal and display in array
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}
int Indinsertion(int arr[], int size, int index, int element, int capacity)
{
    if (size > capacity)
    
    {
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
    return 1;
}
int main()
{
    int arr[100] = {2, 3, 4, 40, 50};
    int size = 5, index = 3, element = 45, capacity = 100;

    Indinsertion(arr, size, index, element, capacity);
    size += 1;
    display(arr, size);
    return 0;
}