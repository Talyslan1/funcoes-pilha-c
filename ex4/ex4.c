#include <stdio.h>

long teste_soma_rec_tail(int n, long acc) {
    if (n == 1) {
        return acc + 1;
    }

    return teste_soma_rec_tail(n - 1, acc + n);
}

long soma_rec(int n) {
    if (n == 1) {
        return 1;
    }

    return n + soma_rec(n - 1);
}

long soma_iter(int n) {
    long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main(void) {
    int n;
    printf("n: ");
    scanf("%d", &n);

    printf("rec = %ld, iter = %ld\n", soma_rec(n), soma_iter(n));

    return 0;
}