#include <stdio.h>

void divmod(int a, int b, int *q, int *r) {
    *q = a / b;
    *r = a % b;

    printf("Quociente: %d, Resto: %d", *q, *r);
}

int main(void) {
    int a, b, q, r;
    printf("Dividendo e divisor: ");
    scanf("%d %d", &a, &b);

    divmod(a, b, &q, &r);

    return 0;
}