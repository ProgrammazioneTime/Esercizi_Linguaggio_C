#include <stdio.h>
/*  Esercizio 3:
    Dato un numero N controllare se è interno o esterno all'intervallo [A..B]
*/

int main(void) {

    int N; // VARIABILE CHE CONTIENE UN VALORE INTERO
    int A, B; // ESTREMI DELL'INTERVALLO CHIUSO [A..B]

    // RICHIESTA DI INSERIMENTO DEGLI ESTREMI DELL'INTERVALLO
    puts("Inserisci l'intervallo [A..B]:");
    scanf("%d %d", &A, &B);

    // RICHIESTA DI INSERIMENTO DEL NUMERO INTERO
    puts("Inserisci il valore di N:");
    scanf("%d", &N);

    // CONTROLLO SE N E' ALL'INTERNO DI DELL'INTERVALLO CHIUSO [A..B]
    if(N >= A || N <= B)
        puts("Fa parte dell'intervallo.");
    else
        puts("Non fa parte dell'intervallo.");

    //getchar();
}
