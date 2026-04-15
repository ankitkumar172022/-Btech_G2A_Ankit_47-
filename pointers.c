#include <stdio.h>

void swap(int *x, int *y) {
    int temp;
    temp = *x;   // store value at x
    *x = *y;     // assign value at y to x
    *y = temp;   // assign stored value to y
}

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);

    swap(&a, &b);  // pass addresses of a and b

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
