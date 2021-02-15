#include <stdio.h>
/*  Esercizio 2:
    Dati due numeri A e B verificare se A è il quadrato di B
*/

int main(void) {

    int A, B; // VARIABILI CHE CONTERRANNO I VALORI INTERI

    // RICHIESTA DI INSERIMENTO DEL VALORE DI A
    puts("Inserisci il valore di A:");
    scanf("%d", &A);

    // RICHIESTA DI INSERIMENTO DEL VALORE DI B
    puts("Inserisci il valore di B:");
    scanf("%d", &B);

    // CONTROLLO CHE A SIA IL QUADRATO DI B
    if(B*B == A)
        puts("Il valore A e' il quadrato di B.");
    else
        puts("Il valore A non e' il quadrato di B.");

    //getchar();
}
