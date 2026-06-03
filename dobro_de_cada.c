#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiros[5];
    int *ponteiro = inteiros;
    for (int i = 0; i < 5; i++) {
        printf("digite um número inteiro: ");
        scanf("%d", (ponteiro + i));
        //printf("%d\n", *(ponteiro + i));
    }
    printf("o dobro de cada valor lido:\n");
    for (int i2 = 0; i2 < 5; i2++) {
        printf("%d\n", (*(ponteiro + i2))*2);
    }
    return 0;
}

// o(1) + o(1) + o(1) + o(1)
// o(4)
// o(1)
