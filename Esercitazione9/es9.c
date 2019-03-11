#include "es9.h"

int verifica_riga(int campo[][DIM], int riga) {

    int i,j,flag = 0;

    if(riga < 0 && riga >= DIM){
        return flag;
    }

    for(i = 0; (i<DIM) && (!flag);i++){
        for(j=i+1;(j<DIM) && (!flag);j++){
            flag =  (campo[riga][i] == campo[riga][j]) ||
                    ((campo[riga][i] <= 0) || (campo[riga][i] > DIM))||
                    ((campo[riga][j] <= 0) || (campo[riga][j] > DIM));
            /*printf("%d = campo[riga][%d] == campo[riga][%d]\n",flag,campo[riga][i],campo[riga][j]);*/
        }
    }
    return !flag;
}

int verifica_colonna(int campo[][DIM], int colonna) {
    return -1;
}

int verifica_riquadro(int campo[][DIM], int riga, int colonna) {
    return -1;
}

int verifica_campo(int campo[][DIM]) {
    return -1;
}
