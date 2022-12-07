// Simple Fibonacci using For

#include <stdio.h>
#include <time.h> 

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
    double time_spent = 0.0;
    clock_t begin = clock();

    long int result = fib(40);

    printf("result %ld\n", result);

    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("Execution time is %f seconds", time_spent);

    return 0;
}