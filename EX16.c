#include <stdio.h>

int main() {
    int opcao, numero;
    unsigned long long fatorial;

    do {
        // Exibir o menu
        printf("Menu:\n");
        printf("1. Calcular o fatorial de um número\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite um número inteiro não negativo: ");
            scanf("%d", &numero);

            if (numero < 0) {
                printf("O fatorial não é definido para números negativos.\n");
            } else {
                fatorial = 1;
                for (int i = 1; i <= numero; i++) {
                    fatorial *= i;
                }
                printf("Fatorial de %d: %llu\n", numero, fatorial);
            }
        } else if (opcao != 2) {
            printf("Opção inválida. Tente novamente.\n");
        }
        printf("\n");
    } while (opcao != 2);

    printf("Saindo...\n");
    return 0;
}
