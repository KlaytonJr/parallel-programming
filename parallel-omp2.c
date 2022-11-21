// Program which code set number of threads

#include <omp.h>
#include <stdio.h>

int main() {
    printf("\nAbrindo Paralelismo - FORA DA REGIAO PARALELA ....\n\n");

    omp_set_num_threads(6);

    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        int nt = omp_get_num_threads();
        printf("Sou a thread %d de um total %d \n", id, nt);
    }

    printf("\nFechando paralelismo  - FORA DA REGIAO PARALELA ....\n\n");

    #pragma omp parallel
    {
        int id = omp_get_thread_num();
        int nt = omp_get_num_threads();
        printf("Sou a thread %d de um total %d \n", id, nt);
    }

    return 0;
}