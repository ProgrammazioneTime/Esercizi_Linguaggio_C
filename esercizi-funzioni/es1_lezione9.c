#include <stdio.h>
/*  Esericizio 1:
    Inserita una quantità di N numeri per ogni valore
    stampare il quantitativo di asterischi.

    3
    * * *

    5
    * * * * *
*/

void asterischi(int);

int main(void) {
    int N, num;

    // Numero di volte per cui si richiederanno gli asterischi
    puts("Inserisci un valore N:");
    do{
        scanf("%d", &N);
    }while(N < 1); // while(!(N >= 1));

    // Ciclo di ripetizione per l'inserimento del numero di asterischi
    for(int i = 0 ; i < N ; i++) {
        puts("\nInserisci un numero:");
        scanf("%d", &num);

        asterischi(num); // Chiama la funzione asterischi e passa il numero come parametro
    }
}

void asterischi(int numero) {
    // Se il numero di asterischi è negativo non può essere stampato
    if(numero <= 0) {
        puts("Impossibile stampare asterischi.");
        return;
    }

    // Ciclo che stampa il numero di asterischi
    for(int i = 0 ; i < numero ; i++) {
        printf("%c ", '*');
    }

    //return;
}
