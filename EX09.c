#include <stdio.h>

int main() {
    double nota1, nota2, media;

    for (int i = 1; i <= 5; i++) {
        printf("Digite as notas do aluno %d (duas notas separadas por espaco): ", i);
        scanf("%lf %lf", &nota1, &nota2);
        
        media = (nota1 + nota2) / 2;

        // Exibir m�dia e status
        if (media >= 7.0) {
            printf("Aluno %d: M�dia = %.2f - Aprovado\n", i, media);
        } else if (media >= 5.0) {
            printf("Aluno %d: M�dia = %.2f - Recupera��o\n", i, media);
        } else {
            printf("Aluno %d: M�dia = %.2f - Reprovado\n", i, media);
        }
    }

    return 0;
}