#include <stdio.h>

int maior(int a, int b) {
    return (a > b) ? a : b;
}

long fatorial(int n) {
    long result = n;
    for(int i = 1; i < n; i++) {
        result *= (n - i);
    }

    return result;
}

int main(void) {
    int a, b;
    printf("Dois inteiros: ");
    scanf("%d %d", &a, &b);

    printf("Maior: %d\n", maior(a, b));
    
    int c;
    printf("n para o fatorial: ");
    scanf("%d", &c);
    printf("Fatorial: %ld\n", fatorial(c));

    return 0;
}