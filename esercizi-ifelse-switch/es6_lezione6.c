#include <stdio.h>
/*  Esercizio 6:
    Determinare quante soluzioni ha un'equazione di secondo grado:
    ax^2 + bx + c
*/

int main(void) {

    int a, b, c; // VARIABILI DEDICATE AI VALORI COSTANTI
    int delta; // delta = b*b - 4*(a)*(c)

    // RICHIESTA DI INSERIMENTO DELLE COSTANTI
    puts("Inserisci le costanti e valori noti dell'equazione:");
    scanf("%d %d %d", &a, &b, &c);


    if(a != 0) { // CONTROLLO CHE SIA UNA EQUAZIONE DI SECONDO GRADO

        delta = b*b - 4*(a)*(c); // CALCOLO DEL DELTA TRAMITE FORMULA

        // VERIFICA DEL NUMERO DI SOLUZIONI DELL'EQUAZIONE
        if(delta > 0)
            puts("Ha due soluzioni.");
        else if(delta < 0)
            puts("Non ha soluzioni.");
        else // caso in cui delta == 0
            puts("Ha una sola soluzione.");
    } else
        puts("Non e' un'equazione di secondo grado.");

    //getchar();
}
