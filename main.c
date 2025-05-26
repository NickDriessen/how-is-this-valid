#include <stdio.h>

int main()
{
    int array[5] = {13, 12, 19, 420, 69};

    printf("%d\n", array[0]);
    printf("%d\n", 2[array]);
    printf("%d\n", *(array + 1));
    printf("%d\n", *(array + 1 + 2));
    printf("%d\n", *(array + 2 * 2));
}