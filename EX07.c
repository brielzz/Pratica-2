#include <stdio.h>

int main() {
    double nota, media;

    
    for (int i = 1; i <= 5; i++) {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%lf", &nota);
        
        media = nota; 
        printf("Aluno %d: Média = %.2f - %s\n", i, media, media >= 6.0 ? "Aprovado" : "Reprovado");
    }

    return 0;
}