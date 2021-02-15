#include <stdio.h>
/*  Esercizio 4:
    Date le misure di tre angoli stabilire di che triangolo si tratta
*/

int main(void) {

    int angolo1, angolo2, angolo3; // VARIABILI DEDICATE AGLI ANGOLI

    // RICHIESTA DI INSERIMENTO DEGLI ANGOLI
    puts("Inserisci gli angoli del triangolo:");
    scanf("%d %d %d", &angolo1, &angolo2, &angolo3);

    // CONDIZIONI DI ESISTENZA DI UN TRIANGOLO
    if(angolo1+angolo2+angolo3 == 180 && angolo1 > 0 && angolo2 > 0 && angolo3 > 0)
        if(angolo1 != angolo2 && angolo1 != angolo3 && angolo3 != angolo2) // CONDIZIONI PER DEFINIRE LA TIPOLOGIA DI TRIANGOLO
            puts("Il triangolo e' scaleno.");
        else if(angolo1 == angolo2 && angolo1 == angolo3)
            puts("Il triangolo e' equilatero.");
        else
            puts("Il triangolo e' isoscele.");
    else
        puts("Il triangolo non esiste.");
    /*
    if(angolo1+angolo2+angolo3 == 180)
        if(angolo1 > 0 && angolo2 > 0 && angolo3 > 0)
    */

    //getchar();
}
