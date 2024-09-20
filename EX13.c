#include <stdio.h>

int main() {
    int opcao;
    double temperatura;

    do {
        // Exibir o menu
        printf("Menu de Conversão de Temperatura:\n");
        printf("1. Celsius para Fahrenheit\n");
        printf("2. Fahrenheit para Celsius\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1 || opcao == 2) {
            printf("Digite a temperatura: ");
            scanf("%lf", &temperatura);
        }

        switch (opcao) {
            case 1:
                printf("Temperatura em Fahrenheit: %.2f\n", (temperatura * 9.0 / 5.0) + 32);
                break;
            case 2:
                printf("Temperatura em Celsius: %.2f\n", (temperatura - 32) * 5.0 / 9.0);
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
        printf("\n");
    } while (opcao != 3);

    return 0;
}