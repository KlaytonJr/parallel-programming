// Simple Fibonacci using For

#include <stdio.h>

int fib(int n) {                                          
    int i, fib1 = 1, fib2 = 1, soma;         
    for (i = 3; i <= n; i = i + 1) {                                        
        soma = fib1 + fib2;                    
        fib1 = fib2;                           
        fib2 = soma;                           
    }                                        
    return fib2;                             
}         
int main() {
    long int result = fib(40);

    printf("result %ld\n", result);
    return 0;
}