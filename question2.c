#include <stdio.h>

int fibonacciVerify (int number){
    int a = 0, b = 1;

    while(1) {
        if (b == number){
            return 1;
        } 
        else if (b > number) {
            return 0;
        }

        int temp = b;
        b = a + b;
        a = temp;
    } 
}

int main() {
    int number = 21;

    if (fibonacciVerify(number)) {
        printf("%d pertence à sequência de Fibonacci.\n", number);
    } else {
        printf("%d não pertence à sequência de Fibonacci.\n", number);
    }

    return 0;
}