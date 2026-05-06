#include <stdio.h>
#include "function_multiplicar.c"

int main() {
    int opcao, num1, num2, continuar;

    do {
        printf("\n--- Calculadora C ---\n");
        printf("1. Soma\n");
        printf("2. Subtracao\n");
        printf("3. Divisao\n");
        printf("4. Multiplicacao\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 4) {
            printf("Digite o primeiro numero: ");
            scanf("%d", &num1);
            printf("Digite o segundo numero: ");
            scanf("%d", &num2);
            printf("Resultado: %d\n", multiplicar(num1, num2));
        } else if (opcao >= 1 && opcao <= 3) {
            printf("Opcao indisponivel\n");
        } else {
            printf("Opcao invalida\n");
        }

        printf("\nDeseja realizar outra operacao? (1-Sim / 0-Sair): ");
        printf("Feito por Marcelo Mendes");
        scanf("%d", &continuar);

    } while (continuar == 1);

    return 0;
}
