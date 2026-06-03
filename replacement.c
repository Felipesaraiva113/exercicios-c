#include <stdio.h>
#include <stdlib.h>

void preencher_vetor_com_valor(int *vetor, int valor){
    int *ponteiro = vetor;
    for (int i = 0; i < 2; i++) {
        *ponteiro = valor;
        printf("%d ", *ponteiro);
        ponteiro++;
    }
    printf("\n");
}

int main() {
    int vetor[2] = {1, 4};
    int valor = 6;
    preencher_vetor_com_valor(vetor, valor);
    return 0;
}
