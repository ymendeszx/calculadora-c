#include <stdio.h>

// Protótipo da função externa
int multiplicar(int a, int b);

int main() {
    int opcao, n1, n2, continuar;

    do {
        printf("\n--- Calculadora C ---\n");
        printf("1. Soma\n2. Subtracao\n3. Divisao\n4. Multiplicacao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 4) {
            printf("Digite dois numeros inteiros: ");
            scanf("%d %d", &n1, &n2);
            printf("Resultado: %d\n", multiplicar(n1, n2));
            printf("feito por Marcelo Mendes Sa");
        } else if (opcao >= 1 && opcao <= 3) {
            printf("Opcao indisponivel.\n");
        } else {
            printf("Opcao invalida.\n");
        }

        printf("\nDeseja realizar outra operacao? (1-Sim / 0-Sair): ");
        scanf("%d", &continuar);

    } while (continuar == 1);

    return 0;
}