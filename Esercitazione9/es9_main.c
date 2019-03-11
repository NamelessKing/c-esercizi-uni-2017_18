#include <stdlib.h>
#include <stdio.h>
#include "es9.h"

/* Campo corretto */
int campo1[DIM][DIM] = {
    { 8, 2, 1, 5, 4, 6, 3, 7, 9 },
    { 9, 6, 4, 8, 3, 7, 5, 2, 1 },
    { 5, 3, 7, 2, 1, 9, 6, 8, 4 },
    { 7, 1, 6, 4, 8, 2, 9, 5, 3 },
    { 3, 4, 9, 7, 5, 1, 8, 6, 2 },
    { 2, 8, 5, 6, 9, 3, 4, 1, 7 },
    { 1, 5, 8, 9, 7, 4, 2, 3, 6 },
    { 4, 7, 2, 3, 6, 5, 1, 9, 8 },
    { 6, 9, 3, 1, 2, 8, 7, 4, 5 }
};

/* Campo corretto */
int campo2[DIM][DIM] = {
    { 4, 8, 7, 9, 5, 2, 1, 3, 6 },
    { 2, 9, 3, 6, 1, 4, 7, 5, 8 },
    { 1, 6, 5, 7, 8, 3, 4, 9, 2 },
    { 8, 2, 1, 3, 7, 5, 6, 4, 9 },
    { 5, 7, 6, 8, 4, 9, 3, 2, 1 },
    { 3, 4, 9, 1, 2, 6, 5, 8, 7 },
    { 9, 1, 8, 5, 3, 7, 2, 6, 4 },
    { 6, 5, 4, 2, 9, 1, 8, 7, 3 },
    { 7, 3, 2, 4, 6, 8, 9, 1, 5 }
};

/* Campo errato */
int campo3[DIM][DIM] = {
    { 2, 7, 3, 4, 8, 1, 9, 6, 5 },
    { 5, 1, 4, 9, 3, 6, 8, 2, 7 },
    { 6, 9, 3, 2, 7, 5, 1, 4, 3 },
    { 8, 3, 1, 6, 5, 7, 2, 9, 4 },
    { 7, 6, 9, 1, 4, 3, 5, 8, 1 },
    { 4, 5, 1, 8, 1, 6, 7, 3, 6 },
    { 9, 4, 5, 7, 2, 3, 6, 1, 8 },
    { 3, 3, 8, 1, 6, 8, 4, 5, 9 },
    { 1, 8, 6, 6, 9, 4, 3, 7, 2 }
};

/* Campo errato */
int campo4[DIM][DIM] = {
    { 2, 7, 3, 0, 8, 1, 9, 6, 5 },
    { 5, 1, 4, 9, 3, 6, 8, 2, 7 },
    { 6, 9, 3, 2, 7, 5, 1, 4, 3 },
    { 8, 3, 1, 6, 5, 7, 2, 9, 4 },
    { 7, 6, 9, 1, 4, 3, 5, 8, 1 },
    { 4, 5, 1, 8, 1, 6, 7, 3, 6 },
    { 9, 4, 5, 7, 2, 3, 6, 1, 8 },
    { 3, 0, 8, 1, 6, 8, 4, 0, 9 },
    { 1, 8, 6, 6, 9, 4, 3, 7, 2 }
};

/*
 * Compilare con il comando `gcc -std=gnu89 -Wall -pedantic -o es9 es9.c es9_main.c`.
 */
int main() {

    /* Inserire qui il vostro main di prova. */

   /* int i,j;
    int campo_test[DIM][DIM] = {
        { 8, 2, 1, 5, 4, 6, 3, 7, 9 },
        { 9, 6, 4, 8, 3, 7, 5, 2, 1 },
        { 5, 3, 7, 2, 1, 9, 6, 8, 4 },
        { 7, 1, 6, 4, 8, 2, 9, 5, 3 },
        { 3, 4, 9, 7, 5, 1, 8, 6, 2 },
        { 2, 8, 5, 6, 9, 3, 4, 1, 7 },
        { 1, 5, 8, 9, 7, 4, 2, 3, 6 },
        { 4, 7, 2, 3, 6, 5, 1, 9, 8 },
        { 6, 9, 3, 1, 2, 8, 7, 4, 5 }
    };

    for (i = 0; i< DIM; i++){
        for(j = 0; j < DIM; j++){
            printf("%d ",campo_test[i][j]);
        }
        printf("\n");
    }


    void verifica_riga(int campo[][DIM], int riga) {
        int j;
        for(j = 0; j< DIM;j++){
            printf("%d ",campo[riga][j]);
        }

    }

    verifica_riga(campo_test,DIM - 1);*/


   /* printf("%d",campo_test[9][9]);*/

    /* restituisce 1 */
    printf("Esercizio 1.1: %d\n", verifica_riga(campo1, 0));
    /* restituisce 0 poiché l'indice di riga è invalido */
    printf("Esercizio 1.2: %d\n", verifica_riga(campo1, 9));
    /* restituisce 0 dal momento che i numeri 1 e 6 sono presenti due volte e mancano i numeri 2 e 9 */
    printf("Esercizio 1.3: %d\n\n", verifica_riga(campo3, 5));


    return EXIT_SUCCESS;
}
