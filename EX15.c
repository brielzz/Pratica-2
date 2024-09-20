#include <stdio.h>

int main() {
    int opcao, numero;

    do {
        // Exibir o menu
        printf("Menu:\n");
        printf("1. Gerar a tabuada de um número\n");
        printf("2. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o número para a tabuada: ");
            scanf("%d", &numero);
            printf("Tabuada de %d:\n", numero);
            for (int i = 1; i <= 10; i++) {
                printf("%d x %d = %d\n", numero, i, numero * i);
            }
        } else if (opcao != 2) {
            printf("Opção inválida. Tente novamente.\n");
        }
        printf("\n");
    } while (opcao != 2);

    printf("Saindo...\n");
    return 0;
}

