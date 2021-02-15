#include <stdio.h>
/*  Esercizio 1:
    Stabilire se due numeri interi sono uguali
*/

int main(void) {

    int valore1, valore2;  // VARIABILI CHE CONTERRANNO I VALORI DI CONFRONTO

    // RICHIESTA DI INSERIMENTO PER IL PRIMO VALORE INTERO
    puts("Inserisci il primo valore:");
    scanf("%d", &valore1);

    // RICHIESTA DI INSERIMENTO PER IL SECONDO VALORE INTERO
    puts("Inserisci il secondo valore:");
    scanf("%d", &valore2);

    // CONFRONTO DEI DUE VALORI INTERI
    if(valore1 == valore2) {
        puts("I valori sono uguali.");
    } else {
        puts("I valori sono diversi.");
    }

    //getchar();
}
