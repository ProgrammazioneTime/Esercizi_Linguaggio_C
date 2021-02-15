#include <stdio.h>
/*  Esercizio 3:
    Contare il numero di caratteri (compresa punteggiatura) dato un testo in input,
    ma escludere gli spazi vuoti, di tabulazione e invii a capo
*/

int main(void) {

    char carattere; // Carattere da inserire
    unsigned contatore = 0; // Contatore dei caratteri corretti

    // Richiesta di inserimento del testo
    puts("Inserisci il testo:");

    // Iterazione controllata da sentinella che assegna da tastiera il carattere
    while((carattere = getchar()) && carattere != EOF) {

        // Se il carattere inserito è uno spazio vuoto, o tabulazione o invio a capo non incrementa il contatore
        switch(carattere) {
            case ' ':
            case '\t':
            case '\n':
                break;

            default:
                contatore++;
                break;
        }
    }

    // Mostra il numero di caratteri
    printf("\n%s %d\n", "Numero di caratteri:", contatore);
}
