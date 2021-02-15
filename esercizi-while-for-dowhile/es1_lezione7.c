#include <stdio.h>
/*  Esercizio 1:
    Fare la media di N voti inseriti dall'utente
*/

int main(void) {

    int N; // Numero dei voti da inserire
    float voto; // Variabile per l'inserimento del voto
    float somma = 0; // Somma totale dei voti

    // Inserimento in input del numero dei voti
    puts("Inserire il numero dei voti:");
    do{
        scanf("%d", &N); // N > 0
    }while(N <= 0); // while(!(N > 0));

    // Iterazione controllata da contatore per inserire i voti
    for(int i = 0 ; i < N ; i++) {

        // Inserimento voti
        puts("Inserisci un voto:");
        do{
            scanf("%f", &voto);
        }while(voto < 0.0 || voto > 10.0); // while(!(voto >= 0.0 && voto <= 10.0));

        // Il voto viene aggiunto alla somma totale dei voti
        somma += voto; // somma = somma + voto;
    }

    // Mostra media
    printf("\n%s %.2f\n", "La media e':", somma/N);
}
