#include <stdio.h>

int main() {
    int idade;

    for (int i = 1; i <= 10; i++) {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);

        // Classificação etária
        if (idade <= 12) {
            printf("Pessoa %d: Criança\n", i);
        } else if (idade <= 17) {
            printf("Pessoa %d: Adolescente\n", i);
        } else if (idade <= 64) {
            printf("Pessoa %d: Adulto\n", i);
        } else {
            printf("Pessoa %d: Idoso\n", i);
        }
    }

    return 0;
}