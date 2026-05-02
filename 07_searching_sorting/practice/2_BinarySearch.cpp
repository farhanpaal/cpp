// Array must be sorted, divide and conquer.
#include <iostream>
using namespace std;

void printArr(int arr[10], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void sortedArr(int arr[10], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printArr(arr, size);
}

int main()
{
    int arr[10] = {2, 4, 5, 8, 33, 46, 34, 34, 67, 3};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);

    printf("Original array is:");
    printArr(arr, sizeArr);

    printf("\n");
    printf("Sorted array is:");
    sortedArr(arr, sizeArr);

    printf("\n");

    // Binary search
    int num = 33;
    int l = 0;
    int h = sizeArr - 1;
    while (l <= h)
    {
        int mid = (l + h) / 2;

        if (arr[mid] == num)
        {
            printf("Found at index %d ", mid);
            return 0;
        }
        else if (num > arr[mid])
        {
            l = mid + 1;
        }
        else
        {
            h = mid - 1;
        }
    }
    printf("\nNot found");
    return 0;
}
