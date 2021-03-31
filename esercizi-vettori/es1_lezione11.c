#include <stdio.h>
#define DIM 5
/*  Esercizio 1:
    Inserire 5 valori interi non negativi e ne disegna l'istogramma
    a barre verticali come mostrato nel seguente esempio.
    Nel caso di inserimento di valori negativi il programma deve terminare
    con un messaggio di errore.

    Esempio:

     5       *
     4     * *
     3     * *
     2     * * *
     1   * * * * *
         1 4 5 2 1
*/

void disegna(int [], int);

int main(void) {
    // Dichiarazione variabili
    int lista[DIM];
    int max = 0;

    // Inserimento dei valori tramite tastiera
    puts("Inserisci 5 valori interi positivi:");
    for(size_t i = 0 ; i < DIM ; i++) {
        scanf("%d", &lista[i]);

        // Se il valore inserito è minore di 0 automaticamente
        // si avvisa l'utente dell'errore e si esce dal programma
        if(lista[i] < 0) {
            puts("Errore, elemento negativo.");
            return 0;
        }

        // Se il valore inserito supera il massimo precedente
        // allora lo sovrascrive con quello nuovo
        if(lista[i] > max) {
            max = lista[i];
        }
    }

    // Richiama la funzione disegna per l'istogramma
    disegna(lista,max);
}

void disegna(int vet[], int max) {
    /*
        Partendo dall'alto con max si gestisce la colonna
        con più valori da dover stampare in output.
        In questo modo diminuendo max di 1 a ogni ciclo
        si scende di "livello" controllando se anche altre
        colonne raggiungono quel dato valore
    */
    while(max > 0) {
        for(size_t i = 0 ; i < DIM ; i++) {

            // Se la colonna possiede un valore maggiore
            // o uguale al massimo trovato allora stampa
            // un asterisco
            if(vet[i] >= max) {
                printf("%c ", '*');
            } else {
                printf("  ");
            }
        }
        puts("");

        max--;
    }

    for(size_t i = 0 ; i < DIM ; i++) {
        printf("%d ", vet[i]);
    }
    puts("");
}
