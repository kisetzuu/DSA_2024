#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 10, y = 20;
    printf("\nBefore swapping the values are: %d, %d\n", x, y);
    swap(&x, &y);
    printf("\nAfter swapping the values are: %d %d\n", x, y);
}