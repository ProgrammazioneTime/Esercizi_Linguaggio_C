#include <stdio.h>
/*  Esercizio 5:
    Date le dimensioni di due rettangoli cancolarne l'area e determinare chi ha
    superficie maggiore
*/

int main(void) {

    int base1, altezza1; // Primo rettangolo
    int base2, altezza2; // Secondo rettangolo

    // RICHIESTA DI INSERIMENTO DI BASE E ALTEZZA DEL PRIMO RETTANGOLO
    puts("Inserisci base e altezza del primo rettangolo:");
    scanf("%d %d", &base1, &altezza1);

    // RICHIESTA DI INSERIMENTO DI BASE E ALTEZZA DEL SECONDO RETTANGOLO
    puts("\nInserisci base e altezza del secondo rettangolo:");
    scanf("%d %d", &base2, &altezza2);

    // CONTROLLO DI ESISTENZA DEI RETTANGOLI 1 E 2
    if(base1 > 0 && base2 > 0 && altezza1 > 0 && altezza2 > 0)
        if(base1*altezza1 > base2*altezza2) // CONDIZIONE DOVE RETTANGOLO 1 > RETTANGOLO 2
            puts("Il primo rettangolo ha superficie maggiore.");
        else if(base1*altezza1 == base2*altezza2) // CONDIZIONE DI UGUAGLIANZA DELLE SUPERFICI
            puts("Entrambi i rettangoli hanno uguale superficie.");
        else // casi con <
            puts("Il secondo rettangolo ha superficie maggiore.");
    else
        puts("Il confronto non può' essere fatto.");

    //getchar();
}
