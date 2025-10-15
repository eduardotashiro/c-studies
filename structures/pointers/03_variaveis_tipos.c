
#include <stdio.h>
#include <stdlib.h>

int xi, *ptr_xi;   // inteiro e ponteiro para inteiro
float xf, *ptr_xf; // float e ponteiro para float
char xc, *ptr_xc;  // char e ponteiro para char

int main()
{
    xi = 10;   // atribui valores
    xf = 3.14; // atribui valores
    xc = 'A';  // atribui valores

    ptr_xi = &xi; // Ponteiro aponta para xi
    ptr_xf = &xf; // Ponteiro aponta para xf
    ptr_xc = &xc; // Ponteiro aponta para xc

    // imprime valor, endereço e conteudo apontado pelo ponteiro

    printf("xi = %d | endereço: %p | *ptr_xi = %d\n", xi, ptr_xi, *ptr_xi);
    printf("xf = %.2f | endereço: %p | *ptr_xf = %.2f\n", xf, ptr_xf, *ptr_xf);
    printf("xc = %c | endereço: %p | *ptr_xc = %c\n", xc, ptr_xc, *ptr_xc);

    return 0;
}

/*
*
*
*
xi = 10 | endereço: 0x591b3406a018 | *ptr_xi = 10
xf = 3.14 | endereço: 0x591b3406a028 | *ptr_xf = 3.14
xc = A | endereço: 0x591b3406a038 | *ptr_xc = A
*
*
*
*/