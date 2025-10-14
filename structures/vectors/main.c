
/*** Exemplo 1 ***/

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

