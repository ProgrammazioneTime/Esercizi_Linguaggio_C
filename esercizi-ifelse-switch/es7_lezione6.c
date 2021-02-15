#include <stdio.h>
/*  Esercizio 7:
    Creare una calcolatrice
*/

int main(void) {

    int scelta; // VARIABILE DI SCELTA PER LO SWITCH
    float op1, op2; // operando1 e operando2
    //float risultato;

    // RICHIESTA DI INSERIMENTO DEGLI OPERANDI
    puts("Inserisci i due operandi:");
    scanf("%f %f", &op1, &op2);

    // SCELTA PROPOSTA ALL'UTENTE
    puts("\nFai una scelta:\n1. Somma\n2. Sottrazione\n3. Divisione\n4. Moltiplicazione");
    scanf("%d", &scelta);

    // CREAZIONE DI UNA SCELTA MULTIPLA CON SWITCH
    switch(scelta) {

        // SOMMA
        case 1:
            printf("\n%s %f", "La somma risulta:", op1+op2);
            break;

        // SOTTRAZIONE
        case 2:
            printf("\n%s %f", "La sottrazione risulta:", op1-op2);
            break;

        // DIVISIONE
        case 3:
            // CONTROLLO CHE SI POSSA ESEGUIRE LA DIVISIONE
            if((op1 == 0 && op2 == 0) || op2 == 0)
                puts("\nLa divisione non ha risultato.");
            else
                printf("\n%s %f", "La divisione risulta:", op1/op2);
            break;

        // MOLTIPLICAZIONE
        case 4:
            printf("\n%s %f", "La moltiplicazione risulta:", op1*op2);
            break;

        // SCELTA NON COMPRESA NELL'ELENCO
        default:
            puts("\nLa scelta non e' corretta.");
            break;
    }

    //getchar();
}
