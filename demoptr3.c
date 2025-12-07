#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;
    int i = 0;

    printf("The value of *(p+1) is: %d\n", *(p+1));  // prints 20
    printf("Value of *p is: %d\n", *p);              // prints 10
    printf("Address stored in p: %p\n", (void*)p);// prints address of arr[0]
    printf("Address of p itself: %p\n", (void*)&p);  // address where p is stored
    printf("Value of arr (base address): %p\n", (void*)arr); // arr points to arr[0]

    printf("%p\n", (int*)p);

    printf("Array elements: ");
    for(i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
