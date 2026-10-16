#include "mathlib.h"

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
