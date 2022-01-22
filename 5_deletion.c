#include<stdio.h> 
void display(int arr[], int n)
{
    // traversal and display in array
    for (int i = 0; i < n; i++)
        printf("%d\n", arr[i]);
}
void Indeletion(int arr[], int size, int index)
{
   
    for (int i = index; i < size-1; i++)
    {
        arr[i] = arr[i+1];
    }
    
    
}

int main()
{
    int arr[100] = {2, 3, 4, 40, 50};
    int size = 5, index = 2;

    Indeletion(arr, size, index);
    size -= 1;
    display(arr, size);
    return 0;
}