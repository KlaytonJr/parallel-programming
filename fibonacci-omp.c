// Fibonacci with OpenMP

#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#define N 40

long fib(long n) {
  long i, j;

  if (n < 2) {
    return n;
  }
  else {
    #pragma omp parallel sections 
    { 
      #pragma omp section 
      i = fib(n-1);
      #pragma omp section 
      j = fib(n-2);
    }
    return i + j;
  }
}

int main() {
  printf("\nFibonacci(%lu) = %lu\n",(long)N,fib((long)N));
  return 0;
}