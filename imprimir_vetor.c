#include <stdio.h>
#include <stdlib.h>

void print_vector(int *vetor){
    int *ponteiro = vetor;
    for (int i = 0; i < 2; i++) {
        printf("%d ", *ponteiro);
        ponteiro++;
    }
    printf("\n");
}

int main() {
    int vetor[2] = {1, 4};
    print_vector(vetor);
    return 0;
}
