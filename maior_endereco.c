#include <stdio.h>
#include <stdlib.h>

int main()
{
    int variable1, variable2 = 0;
    int *ponteiro1, *ponteiro2;
    ponteiro1 = &variable1;
    ponteiro2 = &variable2;
    if(ponteiro1 > ponteiro2)
        printf("A variável 1 possui o maior endereço, que é %p\n", ponteiro1);
    else
        printf("A variável 2 possui o maior endereço, que é %p\n", ponteiro2);
    return 0;
}
