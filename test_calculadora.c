#include <stdio.h>
#include <assert.h>
#include "function_multiplicar.c"


void rodar_teste(int a, int b) {
    int esperado = a * b;
    int obtido = multiplicar(a, b);
    printf("Testando %d * %d: Esperado %d, Obtido %d\n", a, b, esperado, obtido);
    assert(esperado == obtido);
}

int main() {
    rodar_teste(2, 0);
    rodar_teste(3, 6);
    rodar_teste(42, 64);
    
    printf("\nTodos os testes passaram com sucesso!\n");
    printf("Feito por Marcelo Mendes");
    return 0;
}
