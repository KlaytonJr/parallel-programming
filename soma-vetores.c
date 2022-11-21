// Sum vectors

#include <stdio.h>
#include <time.h> 

int main() {
    // para armazenar o tempo de execução do código
    double time_spent = 0.0;

    clock_t begin = clock();

    float A[2048];
    float B[2048];
    float C[2048];

    int i;

    for (i = 0; i < 2048; i++) {
        A[i] = 2;
        B[i] = 3;
    }

    for (i = 0; i < 2048; i++) {
        C[i] = A[i] + B[i];
    }

    for (i = 0; i < 2048; i++) {
        printf("C[%d] = %f\n", i, C[i]);
    }

    clock_t end = clock();

    // calcula o tempo decorrido encontrando a diferença (end - begin) e
    // dividindo a diferença por CLOCKS_PER_SEC para converter em segundos
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
    printf("The elapsed time is %f seconds", time_spent);

    return 0;
}