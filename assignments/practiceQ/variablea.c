#include <stdarg.h>

int calculateSum(int count, ...) {
    int sum = 0;
    va_list args;
    va_start(args, count);
    
    // Loop through each argument and add it to the sum
    for (int i = 0; i < count; ++i) {
        sum += va_arg(args, int);
    }
    
    va_end(args);
    return sum;
}

#include <stdio.h>

int main() {
    printf("Sum: %d\n", calculateSum(3, 10, 20, 30));
    printf("Sum: %d\n", calculateSum(5, 1, 2, 3, 4, 5));
    return 0;
}

