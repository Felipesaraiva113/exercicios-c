#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void segunda_string_dentro_da_primeira(char *str1, char *str2) {
    char *p1, *p2, *inicio;

    // Remove o '\n' que o fgets adiciona ao final das strings
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    // Se a segunda string for vazia, ela tecnicamente está contida na primeira
    if (*str2 == '\0') {
        printf("Resultado: A segunda string ocorre dentro da primeira.\n");
        return;
    }

    // Percorre a primeira string usando o ponteiro 'inicio'
    for (inicio = str1; *inicio != '\0'; inicio++) {
        p1 = inicio; // p1 começa onde 'inicio' está agora
        p2 = str2;   // p2 sempre recomeça do início da segunda string

        // Enquanto os caracteres forem iguais e a segunda string não acabar
        while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2) {
            p1++; // Aritmética de ponteiro: vai para o próximo char
            p2++; // Aritmética de ponteiro: vai para o próximo char
        }

        // Se p2 chegou no '\0', significa que percorremos toda a segunda string e houve match
        if (*p2 == '\0') {
            printf("Resultado: A string '%s' ocorre dentro de '%s'.\n", str2, str1);
            return;
        }
    }

    printf("Resultado: A string '%s' NÃO ocorre dentro de '%s'.\n", str2, str1);
}

int main() {
    char string1[100];
    char string2[100];

    printf("Digite o texto principal: ");
    fgets(string1, 100, stdin);

    printf("Digite o texto a ser buscado: ");
    fgets(string2, 100, stdin);

    // Passamos os nomes dos arrays, que em C funcionam como ponteiros para o primeiro elemento
    segunda_string_dentro_da_primeira(string1, string2);

    return 0;
}
