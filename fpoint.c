#include <stdio.h>

/* A simple function to be pointed to */
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}


int main() {
    /* Declare a function pointer */
    int (*func_ptr)(int, int); /* The function pointer can point to a function that 
                                     takes two integers and returns an integer */
    int (*func_ptr_subtract)(int, int);

    /* Assign the address of the function to the pointer */
    func_ptr = add;
    func_ptr_subtract = subtract;

    /* Use the function pointer to call the function */
    int result = func_ptr(5, 3);
    int result_subtract = func_ptr_subtract(5, 3);
    printf("The result of the addition is: %d\n", result_subtract);

    printf("The result of the addition is: %d\n", result);

    return 0;
}