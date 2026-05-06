#include <stdio.h>

int multiplicar(int a, int b) {
    int resultado = 0;
    int absoluto_b = (b < 0) ? -b : b;

    for (int i = 0; i < absoluto_b; i++) {
        resultado += a;
    }

    if (b < 0) {
        resultado = -resultado;
    }

    return resultado;

    //feito por Thiago Bonfanti
}