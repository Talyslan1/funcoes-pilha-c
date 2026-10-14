#include <stdio.h>

void troca(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void) {
    int x, y;
    printf("Dois inteiros: ");
    scanf("%d %d", &x, &y);

    troca(&x, &y);
    printf("Depois x=%d, y=%d", x, y);

    return 0;
}