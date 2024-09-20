#include <stdio.h>

void converter_base(int numero, int base) {
    char resultado[64];
    int index = 0;

    while (numero > 0) {
        int resto = numero % base;
        resultado[index++] = (resto < 10) ? '0' + resto : 'A' + (resto - 10);
        numero /= base;
    }

    printf("Numero convertido: ");
    for (int i = index - 1; i >= 0; i--) {
        putchar(resultado[i]);
    }
    putchar('\n');
}

int main() {
    int numero, base;

    printf("Digite um numero decimal: ");
    scanf("%d", &numero);
    printf("Digite a base de conversão (entre 2 e 16): ");
    scanf("%d", &base);

    if (base < 2 || base > 16) {
        printf("Base invalida! Deve estar entre 2 e 16.\n");
        return 1;
    }

    converter_base(numero, base);
    return 0;
}