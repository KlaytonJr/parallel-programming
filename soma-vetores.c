// Sum vectors

#include <stdio.h>

int main() {
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

    return 0;
}