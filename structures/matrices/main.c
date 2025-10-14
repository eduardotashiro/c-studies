/*** Exemplo 1 ***/

#include <stdio.h>

int main()
{
    // declara e inicializa uma matriz 2x3
    int matriz[2][3] = {{1, 2, 3}, {4, 5, 6}};

    // imprime os elementros da matriz
    for (int i = 0; i < 2; i++) // percorre as linhas
    {
        for (int j = 0; j < 3; j++) // percorre as colunas
        {                               
            printf("%d ", matriz[i][j]); // acessa e imprime o elemento da linha i e coluna j
        }
        printf("\n");
    }
}
