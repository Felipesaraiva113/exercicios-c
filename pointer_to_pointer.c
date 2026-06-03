#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *b = &a;
    int **c = &b;
    int ***d = &c;
    printf("digite um número inteiro: ");
    scanf("%d", &a);
    *b = (*b) * 2;
    printf("o dobro do número digitado é %d\n", *b);
    **c = ((**c)/2) * 3;
    printf("o triplo do número digitado é %d\n", **c);
    ***d = ((***d)/3) * 4;
    printf("o quádruplo do número digitado é %d\n", ***d);
    return 0;
}
// o(1)
