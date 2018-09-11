#include <stdio.h>

int main (void) {
    double vetor[10];
    int i;

    for (i=0; i<10; i++) {
        vetor[i] = i;
    }

    double* p;

    p = &vetor[0]; //&vetor também daria certo!

    for(i=0; i<10; i++) {
        printf("%d\n", p+i);
    }

    //o endereço do ponteiro, numericamente, incrementa de acordo com
    //o tamanho de minha variável em bytes, i.e, se &vetor[0] = 1000 e
    //vetor[] for do tipo double, &vetor[1] = 1008, pois um double ocupa
    //8 bytes na memória.

    return 0;
}
