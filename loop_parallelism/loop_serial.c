#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100000000

int main() {
    float *a = malloc(sizeof(float) * SIZE);
    float *b = malloc(sizeof(float) * SIZE);
    float *c = malloc(sizeof(float) * SIZE);

    for (int i = 0; i < SIZE; i++) {
        a[i] = 1.0f;
        b[i] = 2.0f;
    }

    clock_t start = clock();
    for (int i = 0; i < SIZE; i++) {
        c[i] = a[i] + b[i];
    }
    clock_t end = clock();

    printf("Elapsed time: %.4f seconds\n", (double)(end - start) / CLOCKS_PER_SEC);

    free(a);
    free(b);
    free(c);
    return 0;
}
