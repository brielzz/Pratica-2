#include <stdio.h>

int main() {
    int numero;

    for (int i = 1; i <= 6; i++) {
        printf("Digite o %dº número inteiro: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) { // Número é par
            printf("%d é par. ", numero);
            if (numero > 10) {
                printf("É maior que 10.\n");
            } else {
                printf("Não é maior que 10.\n");
            }
        } else { // Número é ímpar
            printf("%d é ímpar. ", numero);
            if (numero < 50) {
                printf("É menor que 50.\n");
            } else {
                printf("Não é menor que 50.\n");
            }
        }
    }

    return 0;
}