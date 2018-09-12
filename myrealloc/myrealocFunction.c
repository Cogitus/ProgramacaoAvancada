#include <stdio.h>
#include <stdlib.h>

int* myrealloc (int* ponteiro_antigo, int tamanhoNovo, int tamanhoVelho);
//tamanhoNovo e tamanhoVelho em bytes;


int main (void) {

    int vetorTeste[10], i;
    int* ponteiroAntigo = &vetorTeste[0];


    for (i=0; i<10; i++) {
        vetorTeste[i] = i;
    }


    for (i=0; i<10; i++) {
        printf("%d, ", *(ponteiroAntigo+i));
    }

    printf("\n\n");

    int tamanhoNovo;

    printf("Digte um novo valor para o tamanho do novo bloco de memória: ");
    scanf("%d", &tamanhoNovo);

    int* ponteiroNovo = myrealloc(ponteiroAntigo, tamanhoNovo, 10);

    for (i=0; i<tamanhoNovo; i++) {
        printf("%d, ", *(ponteiroNovo+i));
    }


    return 0;
}

//como estou realocando, retorno o novo endereço de memória;
int* myrealloc (int* ponteiro_antigo, int tamanhoNovo, int tamanhoVelho) {
    int* ponteiro_auxiliar; //farei as operações com ele e direi que o novo
                          //endereço de ponteiro_antigo é o endereço deste.
    /*tenho três casos:
        1 - tamanhoNovo == tamanhoVelho;
        2 - tamanhoNovo < tamanhoVelho;
        3 - tamanhoNovo > tamanhoVelho;
    */
    int i;//minha variável de controle


    //antes de tudo isso devo armazenar memoria para ponteiro_auxiliar;
    ponteiro_auxiliar = (int*) malloc(tamanhoNovo*sizeof(int));

    if (ponteiro_antigo == NULL) {
        exit(0);
    }
    //começando os condicionais;

    if (tamanhoNovo == tamanhoVelho) {
        for(i=0; i<tamanhoNovo; i++) {
            *(ponteiro_auxiliar+i) = *(ponteiro_antigo+i);
        }
    }

    else {
        if(tamanhoNovo > tamanhoVelho) {
            for(i=0; i<tamanhoNovo; i++) {
                *(ponteiro_auxiliar+i) = *(ponteiro_antigo+i);
            }
        }

        else {
            for(i=0; i<tamanhoVelho; i++) {
                *(ponteiro_auxiliar+i) = *(ponteiro_antigo+i);
            }
        }
    }

    return ponteiro_auxiliar;
}
