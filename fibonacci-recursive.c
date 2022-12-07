// Simple Fibonacci

#include <omp.h>
#include <stdio.h>
#include <time.h>

int fib(int n) {                                         
    if (n == 1) return 1;                   
    else {
        if (n == 2) return 1;                 
        else return fib(n - 1) + fib(n - 2);  
    }                                
}   

int main() {
    double time_spent = 0.0;
    clock_t begin = clock();

    long int result = fib(40);

    printf("result %ld\n", result);

    clock_t end = clock();
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", time_spent);

    return 0;
}