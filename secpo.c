#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    // y -> address of the first element
    int *y = arr;

    int (*x)[5] = &arr;


    printf("Address of the first element (arr or y): %p\n", y);
    printf("Address of the first element (arr or y): %p\n", &arr);
    printf("Address of the first element (arr or y) + 1: %d\n", *(arr));

    printf("value of the first element (arr[0] or *y): %d\n", *y+1);

    printf("Address of the first element x: %d\n", *(*x+1));

   

    return 0;
}
