#include <stdio.h>

int main() {
    float a[4] = {1.0, 2.0, 3.0, 4.0};
    float b[4] = {4.0, 3.0, 2.0, 1.0};
    float result[4];

    for (int i = 0; i < 4; i++) {
        result[i] = a[i] + b[i];
    }

    for (int i = 0; i < 4; i++) {
        printf("%.1f ", result[i]);
    }
    printf("\n");
    return 0;
}
