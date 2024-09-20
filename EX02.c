#include <stdio.h>

int main() {
    int numero, soma_divisores = 0;

    // Solicitar um n�mero inteiro positivo ao usu�rio
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    // Verificar se o n�mero � positivo
    if (numero <= 0) {
        printf("Por favor, insira um n�mero inteiro positivo.\n");
        return 1;
    }

    // Calcular a soma dos divisores pr�prios
    for (int i = 1; i < numero; i++) {
        if (numero % i == 0) {
            soma_divisores += i;
        }
    }

    // Verificar se o n�mero � perfeito
    if (soma_divisores == numero) {
        printf("%d � um n�mero perfeito.\n", numero);
    } else {
        printf("%d n�o � um n�mero perfeito.\n", numero);
    }

    return 0;
}