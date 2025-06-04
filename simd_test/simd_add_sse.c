#include <stdio.h>
#include <xmmintrin.h>

int main() {
    float a[4] = {1.0, 2.0, 3.0, 4.0};
    float b[4] = {4.0, 3.0, 2.0, 1.0};
    float result[4];

    __m128 vec_a = _mm_loadu_ps(a);
    __m128 vec_b = _mm_loadu_ps(b);
    __m128 vec_result = _mm_add_ps(vec_a, vec_b);
    _mm_storeu_ps(result, vec_result);

    for (int i = 0; i < 4; i++) {
        printf("%.1f ", result[i]);
    }
    printf("\n");
    return 0;
}
