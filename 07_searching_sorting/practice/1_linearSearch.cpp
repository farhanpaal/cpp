#include <stdio.h>
using namespace std;

int main()
{
    int arr[7] = {1, 2, 5, 8, 4, 3, 1};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);
    int findNo = 3;
    int idx = -1;

    for (int i = 0; i < sizeArr; i++)
    {
        if (arr[i] == findNo)
        {
            idx = i;
            break;
        }
    }

    if (idx != -1)
        printf("Number found at index %d", idx);
    else
        printf("Not found");

    return 0;
}