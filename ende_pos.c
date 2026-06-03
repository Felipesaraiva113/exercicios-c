#include <stdio.h>
#include <stdlib.h>

int main()
{
    float vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    float *ponteiro = vetor;
    for (int i = 0; i < 10; i++) {
        printf("endereço da posição %d (elemento %f): %p\n", i, ponteiro[i], (ponteiro + i));
    }
    return 0;
}

// o(1) + o(n) 
// o(1 + n)
// o(n)
