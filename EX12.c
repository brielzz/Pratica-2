#include <stdio.h>

int main() {
    int numero;

    for (int i = 1; i <= 6; i++) {
        printf("Digite o %d� n�mero inteiro: ", i);
        scanf("%d", &numero);

        if (numero % 2 == 0) { // N�mero � par
            printf("%d � par. ", numero);
            if (numero > 10) {
                printf("� maior que 10.\n");
            } else {
                printf("N�o � maior que 10.\n");
            }
        } else { // N�mero � �mpar
            printf("%d � �mpar. ", numero);
            if (numero < 50) {
                printf("� menor que 50.\n");
            } else {
                printf("N�o � menor que 50.\n");
            }
        }
    }

    return 0;
}