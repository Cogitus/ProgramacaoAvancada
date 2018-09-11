#include <stdio.h>

int main (void) {

    char vetor1[10];
    int vetor2[10];
    float vetor3[10];
    double vetor4[10];

    int i;

    for (i=0; i<10; i++) {
        vetor1[i] = i;
        vetor2[i] = i;
        vetor3[i] = i;
        vetor4[i] = i;
    }

    double* p;

    char* p1 = &vetor1[0]; //&vetor também daria certo!
    int* p2 = &vetor2[0];
    float* p3 = &vetor3[0];
    double* p4 = &vetor4[0];

    printf("Para um vetor de char: \n");
    for(i=0; i<10; i++) {
        printf("%d\n", p1+i);
    }
    printf("\n\n");

    printf("Para um vetor de int: \n");
    for(i=0; i<10; i++) {
        printf("%d\n", p2+i);
    }
    printf("\n\n");

    printf("Para um vetor de float: \n");
    for(i=0; i<10; i++) {
        printf("%d\n", p3+i);
    }
    printf("\n\n");

    printf("Para um vetor de double: \n");
    for(i=0; i<10; i++) {
        printf("%d\n", p4+i);
    }
    printf("\n\n");

    //o endereço do ponteiro, numericamente, incrementa de acordo com
    //o tamanho de minha variável em bytes, i.e, se &vetor[0] = 1000 e
    //vetor[] for do tipo double, &vetor[1] = 1008, pois um double ocupa
    //8 bytes na memória.

    return 0;
}
