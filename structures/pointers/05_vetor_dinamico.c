
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *vetor;
    int tamanho;

    // solicita o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    // aloca memória para o vetor
    vetor = (int *)malloc(tamanho * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro na alocação de memória!\n");
        return 1;
    }

    // Inicializa e imprime o vetor
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = i + 1; // Atribui valores 1, 2, ... tamanho
        printf("%d ", vetor[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(vetor);

    return 0;
}