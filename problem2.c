#include <stdio.h>
long fibonacci(int n) {
    long sum = 0;
    int first = 0, second = 1, next, i;
    for (i = 0; i < n && next < 4000000; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        if (next % 2 == 0) {
            sum += next;
        }
    }
    return sum;
}

int main(int argc, char** argv) {
    printf("Sum: %ld\n", fibonacci(100));
    return 0;
}
