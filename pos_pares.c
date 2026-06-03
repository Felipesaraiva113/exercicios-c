#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[5] = {};
    int *ponteiro = vetor;
    for (int i = 0; i < 5; i++) {
        printf("digite um número inteiro: ");
        scanf("%d", (ponteiro + i));
    }
    printf("\nvalores pares lidos e seus respectivos endereços na memória:\n");
    for (int i2 = 0; i2 < 5; i2++) {
        if (*(ponteiro + i2) % 2 == 0) {
            printf("\nvalor: %d | endereço: %p\n", (*(ponteiro + i2)), (ponteiro + i2));
        }  
    }
    return 0;
}

// o(1) + o(1) + o(1) + o(1)
// o(4)
// o(1)
