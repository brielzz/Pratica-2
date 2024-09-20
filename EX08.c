#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numero_sorteado, palpite;
    const int tentativas = 7;

    srand(time(NULL));
    numero_sorteado = rand() % 100 + 1;

    printf("Adivinhe o n�mero entre 1 e 100. Voc� tem %d tentativas!\n", tentativas);

    for (int i = 0; i < tentativas; i++) {
        printf("Tentativa %d: ", i + 1);
        scanf("%d", &palpite);

        if (palpite < 1 || palpite > 100) {
            printf("N�mero inv�lido. Tente novamente.\n");
            i--; 
            continue;
        }

        if (palpite == numero_sorteado) {
            printf("Parab�ns! Voc� acertou o n�mero %d!\n", numero_sorteado);
            return 0;
        }
        printf("O n�mero sorteado � %s.\n", palpite < numero_sorteado ? "maior" : "menor");
    }

    printf("Voc� esgotou suas tentativas. O n�mero era %d.\n", numero_sorteado);
    return 0;
}