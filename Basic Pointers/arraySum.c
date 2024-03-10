#include <stdio.h>

int arraySum(int *arr, int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum+= *(arr + i);
    }
    return sum;
}

int main(void)
{
    int arr[] = {5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Sum of array elements is: %d\n", arraySum(arr, size));
    return 0;

}
