#include <stdio.h>
#include "mathlib.h"

int main(void) {
    int a, b;
    printf("Dois inteiros: ");
    scanf("%d %d", &a, &b);
    printf("Maior: %d\n", maior(a, b));

    int n;
    printf("Fatorial de: ");
    scanf("%d", &n);
    printf("Fatorial: %ld\n", fatorial(n));

    return 0;
}
