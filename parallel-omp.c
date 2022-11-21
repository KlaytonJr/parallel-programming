// Program which uses the threads setted from OS

#include <omp.h>
#include <stdio.h>

int main() {
    printf("\nAbrindo Paralelismo - FORA DA REGIAO PARALELA ....\n\n");

    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        int nt = omp_get_num_threads();
        printf("Sou a thread %d de um total %d \n", id, nt);
    }

    printf("\nFechando paralelismo  - FORA DA REGIAO PARALELA ....\n\n");

    return 0;
}