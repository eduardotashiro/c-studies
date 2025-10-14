
// ---- Exemplo 1 ---- 


/*  */
#include <stdio.h> // biblioteca padrão para entrada e saída (printf, scanf, etc.)

int main()
{
    int numeros[5];                    // vetor de int com 5 elementos
    int numeros2[5] = {1, 2, 3, 4, 5}; // declara e inicializa um vetor
    numeros[1] = 10;                   // atribui o valor 10 na 2º posição do vetor numeros

    printf("%d", numeros[1]);    // exibe 2º elemento do vetor numeros (valor 10)
    printf("\n%d", numeros2[0]); // pula uma linha e exibe 1º elemento do vetor numeros2 (valor 1)
    
    for (int i = 0; i < 5; i++) 
    {
        printf("\n%d ", numeros2[i]);
    }
    return 0;

}



// ---- Exemplo de alocação dinâmica com vetores ----


/*  */
#include <stdio.h>   // Biblioteca padrão de entrada e saída (printf, scanf, etc..)
#include <stdlib.h>  // Biblioteca que contém funções para alocação de memória (malloc, free, etc..)

int main()
{
    int *vetor;    // Declara um ptr para int, ele vai apontar para o início do vetor que será criado dinamicamente
    int tamanho;   // Variável que vai guardar o tamanho do vetor (quantos elementos ele terá)

    // ---- Entrada de dados ----
    printf("Digite o tam do vetor: ");  
    scanf("%d", &tamanho);              // Lê o valor digitado e armazena em "tamanho"

    // --- Alocação dinâmica de memória ---
    // malloc reserva, em tempo de execução, o espaço necessário na memória RAM
    // `tamanho * sizeof(int)` calcula quantos bytes serão necessários para armazenar 'tamanho' inteiros
    // O (int *) converte o ponte10iro genérico (void *) retornado pelo malloc em um ponteiro do tipo int
    vetor = (int *)malloc(tamanho * sizeof(int));

    // --- Verificação da alocação ---
    // Se malloc não conseguir alocar a memória, ele retorna NULL
    if (vetor == NULL)
    {
        printf("Erro na alocação!\n"); 
        return 1;                       // Encerra o programa com código 1 (indica erro)
    }

    // --- Inicialização e exibição dos valores do vetor ---
    // Este laço vai percorrer cada posição do vetor e atribuir valores a ele
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = i + 1;            // Atribui a cada posição o valor (i + 1): 1, 2, 3, ...
        printf("%d ", vetor[i]);     // Imprime o valor armazenado na posição atual do vetor
    }

    printf("\n"); 

    // --- Liberação da memória ---
    // Após o uso, sempre devemos liberar a memória alocada dinamicamente para evitar vazamentos - memory leak
    free(vetor);  // Libera o espaço que malloc reservou

    return 0;  // Retorna 0 indicando que o programa terminou corretamente
}
