#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>

#define SIZE 100000000

int main() {
    float *a = malloc(sizeof(float) * SIZE);
    float *b = malloc(sizeof(float) * SIZE);
    float *c = malloc(sizeof(float) * SIZE);

    for (int i = 0; i < SIZE; i++) {
        a[i] = 1.0f;
        b[i] = 2.0f;
    }

    double start = omp_get_wtime();
    #pragma omp parallel for
    for (int i = 0; i < SIZE; i++) {
        c[i] = a[i] + b[i];
    }
    double end = omp_get_wtime();

    printf("Elapsed time (parallel): %.4f seconds\n", end - start);

    free(a);
    free(b);
    free(c);
    return 0;
}
