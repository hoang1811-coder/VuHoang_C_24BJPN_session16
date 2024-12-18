#include <stdio.h>
void sum(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int x = 15, y = 17, result = 0;
    printf("Truoc khi tính tong: x = %d, y = %d, result = %d\n", x, y, result);

    sum(&x, &y, &result);

    printf("Sau khi tính tong: result = %d\n", result);

    return 0;
}
