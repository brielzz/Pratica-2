#include <stdio.h>

int main() {
    const int num_alunos = 5;
    double notas[num_alunos], pesos[num_alunos], soma_ponderada = 0.0, soma_pesos = 0.0;

    // Solicitar notas e pesos dos alunos
    for (int i = 0; i < num_alunos; i++) {
        printf("Digite a nota e o peso do aluno %d: ", i + 1);
        scanf("%lf %lf", &notas[i], &pesos[i]);
        soma_ponderada += notas[i] * pesos[i];
        soma_pesos += pesos[i];
    }

    // Calcular e exibir média final da turma
    printf("\nMédia Final da Turma: %.2f\n", soma_ponderada / soma_pesos);

    return 0;
}