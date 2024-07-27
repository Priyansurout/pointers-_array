#include <stdio.h>
#include <stdlib.h>

int main() {

    int arr[5] = {1,2,3,4,5};

    for (int i=0; i<5; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("size of interger is int: %d\n", sizeof(arr[0]));

    printf("Address of the first element (arr): %p \n", arr);
    printf("Address of the first element (&arr[0]): %p\n", &arr[0]);

    printf("Address of the whole array (&arr): %p\n", &arr);


    printf("Size of arr: %zu\n", sizeof(arr));
    printf("Size of &arr: %zu\n", sizeof(&arr));

   


    // Print addresses of all elements
    for (int i = 0; i < 5; i++) {
        printf("Address of arr[%d]: %p\n", i, (void *)&arr[i]);
    }


    printf("want is mean by *arr: %p \n", *&arr);


    // y -> i have address of first element
    // &y -> then it give the address of full array
//  ---------------------------------------------------
    // x -> i have address of full array
    // *x -> i can give you address of first element 

    
    return 0;
}
