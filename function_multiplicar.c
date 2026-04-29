#include <stdio.h>

int multiplicar(int a, int b) {
    int resultado = 0;
    int abs_b = b < 0 ? -b : b;

    for (int i = 0; i < abs_b; i++) {
        resultado += a;
    }

    if (b < 0) {
        resultado = -resultado;
    }

    return resultado;
}