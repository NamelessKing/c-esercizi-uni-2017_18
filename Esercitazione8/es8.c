#include <stdlib.h>
#include <stdio.h>
#include "es8.h"

/*
Esercizio 1:

Scrivere la funzione che legge da terminale
una sequenza di numeri terminata da due numeri consecutivi uguali.

Esempi di test:

Seleziona l'esercizio da eseguire:
        1       : Es 1 (Leggi sequenza semplice)
        2       : Es 2 (Leggi sequenza e calcola media)
        3       : Es 3 (Goldbach)
        altro   : Esci

1
Inserisci un numero:
8
Inserisci un numero:
2
Inserisci un numero:
18
Inserisci un numero:
18
Sequenza terminata
*/
void leggi_sequenza(){

    int primo,secondo;

    printf("Inserisci un numero:\n");
    scanf("%d",&primo);

    do{
        secondo = primo;
        printf("Inserisci un numero:\n");
        scanf("%d",&primo);

    }while(secondo != primo);

    printf("Sequenza terminata\n");

}


/*
Esercizio 2:

Scrivere una funzione che legge da terminale
una sequenza di lunghezza sconosciuta di numeri interi positivi.
Il programma, a partire dal primo numero introdotto,
stampa dopo ogni numero inserito la media di tutti i
numeri letti fino a quel momento.
Terminare quando il numero letto è negativo.

Esempi di test:

Seleziona l'esercizio da eseguire:
        1       : Es 1 (Leggi sequenza semplice)
        2       : Es 2 (Leggi sequenza e calcola media)
        3       : Es 3 (Goldbach)
        altro   : Esci
2
Inserisci un numero:
8
La media attuale è: 8.000
Inserisci un numero:
4
La media attuale è: 6.000
Inserisci un numero:
3
La media attuale è: 5.000
Inserisci un numero:
3
La media attuale è: 4.500
Inserisci un numero:
0
La media attuale è: 3.600
Inserisci un numero:
-4
Le media finale è: 3.600
Seleziona l'esercizio da eseguire:
        1       : Es 1 (Leggi sequenza semplice)
        2       : Es 2 (Leggi sequenza e calcola media)
        3       : Es 3 (Goldbach)
        altro   : Esci
2
Inserisci un numero:
-8
Le media finale è: 0.000
*/
void media_sequenza(){

    int i=1,numero,somma = 0;
    float media = 0;

    printf("Inserisci un numero:\n");
    scanf("%d",&numero);

    while(numero >=0){
        somma += numero;
        media = (float)somma/i;

        printf("La media attuale è: %.3f\n",media);

        printf("Inserisci un numero:\n");
        scanf("%d",&numero);

        i++;
    }

    printf("La media finale è: %.3f\n",media);
}


/*
Esercizio 3:

In matematica, la congettura di Goldbach è
uno dei più vecchi problemi irrisolti nella
teoria dei numeri. Essa afferma che ogni
numero pari maggiore di 2 può essere
scritto come somma di due numeri primi
(che possono essere anche uguali).

Scrivere la funzione goldbach che legge
da terminale un numero intero n e stampa
la coppia di numeri primi la cui somma è pari a n.

Il risultato deve rispettare il seguente formato:

Golbach(x) = a + b
Dove a <= b.

Esempi di test:

Seleziona l'esercizio da eseguire:
        1       : Es 1 (Leggi sequenza semplice)
        2       : Es 2 (Leggi sequenza e calcola media)
        3       : Es 3 (Goldbach)
        altro   : Esci

3
Inserisci un numero pari maggiore di 2:
8
Golbach(8) = 3 + 5
Seleziona l'esercizio da eseguire:
        1       : Es 1 (Leggi sequenza semplice)
        2       : Es 2 (Leggi sequenza e calcola media)
        3       : Es 3 (Goldbach)
        altro   : Esci

3
Inserisci un numero pari maggiore di 2:
7
Il numero inserito è dispari
Seleziona l'esercizio da eseguire:
        1       : Es 1 (Leggi sequenza semplice)
        2       : Es 2 (Leggi sequenza e calcola media)
        3       : Es 3 (Goldbach)
        altro   : Esci

3
Inserisci un numero pari maggiore di 2:
2
Il numero deve essere maggiore di 2
*/

int isPrime(int n){
    int i;
    for (i = 2; i < n; i++) {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
void goldbach(){

    int numero,i,j,condition = 0;
    printf("Inserisci un numero pari maggiore di 2:\n");
    scanf("%d",&numero);

    if(numero<=2){
        printf("Il numero deve essere maggiore di 2\n");
    }else if(numero%2 != 0){
        printf("Il numero inserito è dispari\n");
    }else{

        for ( i = 2; i < numero && !condition; i++) {
            for ( j = i; j < numero; j++) {
                if(isPrime(i) && isPrime(j) && i+j == numero ){
                    printf("Goldbach(%d) = %d + %d\n",numero,i,j);
                    condition = !condition;
                }
            }
        }

    }
}
