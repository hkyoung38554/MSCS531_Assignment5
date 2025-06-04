#include <xmmintrin.h>
#include <stdio.h>

int main() {
    float A[4] = {1.0, 2.0, 3.0, 4.0};
    float B[4] = {4.0, 3.0, 2.0, 1.0};
    float C[4];

    __m128 vecA = _mm_loadu_ps(A);
    __m128 vecB = _mm_loadu_ps(B);
    __m128 vecC = _mm_add_ps(vecA, vecB);

    _mm_storeu_ps(C, vecC);

    for (int i = 0; i < 4; i++) {
        printf("%.1f ", C[i]);
    }

    return 0;
}
