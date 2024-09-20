#include <stdio.h>

int eh_primo(int numero) {
    if (numero < 2) return 0;
    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) return 0;
    }
    return 1;
}

int main() {
    int valor_inicial, valor_final;

    printf("Digite um valor inicial e um valor final (positivos): ");
    scanf("%d %d", &valor_inicial, &valor_final);

    if (valor_inicial <= 0 || valor_final <= 0 || valor_inicial > valor_final) {
        printf("Valores inv�lidos.\n");
        return 1;
    }

    printf("N�meros primos entre %d e %d:\n", valor_inicial, valor_final);
    int encontrou_primo = 0;

    for (int i = valor_inicial; i <= valor_final; i++) {
        if (eh_primo(i)) {
            printf("%d ", i);
            encontrou_primo = 1;
        }
    }

    if (!encontrou_primo) {
        printf("N�o h� n�meros primos nesse intervalo.\n");
    } else {
        printf("\n");
    }

    return 0;
}