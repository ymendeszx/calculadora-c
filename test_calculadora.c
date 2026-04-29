#include <stdio.h>
#include <assert.h>

int multiplicar(int a, int b);

void executar_teste(int a, int b) {
    int esperado = a * b;
    int obtido = multiplicar(a, b);
    
    if (esperado == obtido) {
        printf("Teste Passou: %d * %d = %d\n", a, b, obtido);
    } else {
        printf("Teste Falhou: %d * %d | Esperado: %d, Obtido: %d\n", a, b, esperado, obtido);
        assert(esperado == obtido);
    }
}

int main() {
    printf("Iniciando Testes Unitarios...\n");
    executar_teste(2, 0);
    executar_teste(3, 6);
    executar_teste(42, 64);
    printf("Todos os testes foram concluidos com sucesso!\n");
    printf("feito por Marcelo Mendes Sa");
    return 0;
}