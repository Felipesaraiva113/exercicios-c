#include <stdio.h>
#include <stdlib.h>

int main()
{
    float the_matrix_of_leadership[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    float *ponteiro = &the_matrix_of_leadership[0][0];
    int i;
    for (i = 0; i < 9; i++) {
        printf("%p (%.2f) ", (ponteiro + 1), *(ponteiro + i));
    }
    return 0;
}
