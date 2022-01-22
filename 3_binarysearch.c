#include <stdio.h>
int binarysearch(int arr[], int size, int element)
{
    int low, mid, high;
    low=0;
    high=size-1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element) 
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 26, 27, 39, 45, 79};
    int size = sizeof(arr) / sizeof(int);
    int element = 26;
    int searchindex = binarysearch(arr, size, element);
    printf("The given element is %d is at a index of %d", element, searchindex);
    return 0;
}