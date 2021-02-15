#include <stdio.h>
/*  Esercizio 5:
    Stampare in output un triangolo isocele di altezza H:
         *
        * *
       *   *
      *     *
     * * * * *
*/

int main(void) {

    int altezza; // Altezza del triangolo iscoscele

    // Inserimento dell'altezza
    puts("Inserisci l'altezza del triangolo:");
    do{
        scanf("%d", &altezza);
    }while(altezza < 2); // while(!(altezza >= 2));

    // Iterazione controllata da contatore per gestire riga per riga
    for(int i = 0 ; i < altezza-1 ; i++) {

        // Iterazione controllata da contatore per gestire ogni punto
        for(int j = 0 ; j < altezza*2 ; j++) {

            // Se j non soddisfa la condizione stampa uno spazio vuoto, altrimenti l'asterisco
            if(j != (altezza-1)+i && j != (altezza-1)-i)
                printf("%c", ' ');
            else
                printf("%c", '*');
        }

        puts(""); // Manda a capo di una riga
    }

    // Mostra riga finale
    for(int i = 0 ; i < altezza ; i++)
        printf("%s", "* ");
}
