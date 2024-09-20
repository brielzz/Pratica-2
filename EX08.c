#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_sorteado, palpite;
    const int tentativas = 7;

    srand(time(NULL));
    numero_sorteado = rand() % 100 + 1;

    printf("Adivinhe o número entre 1 e 100. Você tem %d tentativas!\n", tentativas);

    for (int i = 0; i < tentativas; i++) {
        printf("Tentativa %d: ", i + 1);
        scanf("%d", &palpite);

        if (palpite < 1 || palpite > 100) {
            printf("Número inválido. Tente novamente.\n");
            i--; 
            continue;
        }

        if (palpite == numero_sorteado) {
            printf("Parabéns! Você acertou o número %d!\n", numero_sorteado);
            return 0;
        }
        printf("O número sorteado é %s.\n", palpite < numero_sorteado ? "maior" : "menor");
    }

    printf("Você esgotou suas tentativas. O número era %d.\n", numero_sorteado);
    return 0;
}