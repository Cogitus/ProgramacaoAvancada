#include <stdio.h>
#include <stdlib.h>

int main () {
    int i, j, k;
    int numMatrizes, numLinhas, numColunas;

    printf("Numero de matrizes: ");
    scanf("%d", &numMatrizes);

    printf("Numero de linhas: ");
    scanf("%d", &numLinhas);

    printf("Numero de colunas: ");
    scanf("%d", &numColunas);

    int ***matriz;

    //aloquei a minha memoria para o array de matrizes, no entanto, não tenho uma regra
    //quanto a funcionamento de seus indices. PRECISO AJEITÁ-LOS!!1!
    matriz = (int***) malloc(numMatrizes*sizeof(int**));
    matriz[0] = (int**) malloc(numMatrizes*numLinhas*sizeof(int*));//quantidade de linhas por matriz
    matriz[0][0] = (int*) malloc(numMatrizes*numLinhas*numColunas*sizeof(int));

    //configuração;
    for (k=1; k<numMatrizes; k++) {
        matriz[k] = matriz[k-1] + numLinhas*numColunas;
    }
    /*Para percorrer matriz a matriz, eu devo avançar sempre um número de linhas
    igual ao devido tamanho de um a matriz. Pela logica:

    matriz[1] = matriz[0]+ <tamanhoDaMatriz>(numLinhas*numColunas);

    */


    for (k=0; k<numMatrizes; k++) {//quero percorrer matriz a matriz
        for(i=1; i<numLinhas; i++) {
            matriz[k][i] = matriz[0][0] + i*numColunas;
        }
    }

    for(k=0; k<numMatrizes; k++) {
        for(i=0; i<numLinhas; i++) {
            for(j=0; j<numColunas; j++) {
                matriz[k][i][j] = k + i + j;
            }
        }
    }

    for(k=0; k<numMatrizes; k++) {
        for(i=0; i<numLinhas; i++) {
            for(j=0; j<numColunas; j++) {
                printf("%d, ", matriz[k][i][j]);
            }
            printf("\n");
        }
        printf("\n\n");
    }


    free(matriz[0][0]);
    free(matriz[0]);
    free(matriz);


    return 0;
}
