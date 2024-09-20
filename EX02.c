#include <stdio.h>

int main() {
    int numero, soma_divisores = 0;

    // Solicitar um número inteiro positivo ao usuário
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    // Verificar se o número é positivo
    if (numero <= 0) {
        printf("Por favor, insira um número inteiro positivo.\n");
        return 1;
    }

    // Calcular a soma dos divisores próprios
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma_divisores += i;
        }
    }

    // Verificar se o número é perfeito
    if (soma_divisores == numero) {
        printf("%d é um número perfeito.\n", numero);
    } else {
        printf("%d não é um número perfeito.\n", numero);
    }

    return 0;
}