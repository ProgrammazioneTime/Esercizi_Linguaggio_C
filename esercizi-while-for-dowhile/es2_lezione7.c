#include <stdio.h>
/*  Esercizio 2:
    Inserire N numeri interi positivi e mostrare in output
    quanti numeri sono dispari, quanti sono pari,
    la media tra tutti i numeri e il massimo e minimo
*/

int main(void) {

    int N; // Numero dei numeri positivi interi
    int numero; // Numero positivo intero da inserire
    int dispari = 0, pari = 0; // Contatori dei numeri dispari e pari
    int max, min; // Variabili dedicate al numero maggiore e minore della sequenza
    float somma = 0; // Somma totale dei numeri inseriti

    // Inserimento del numero dei numeri
    puts("Inserisci il numero dei numeri:");
    do{
        scanf("%d", &N);
    }while(N < 1); // while(!(N >= 1));

    // Inserimento del primo numero della serie
    puts("Inserisci un numero intero positivo:");
    do{
        scanf("%d", &numero);
    }while(numero < 0); // while(!(numero >= 0));

    max = min = numero; // Al massimo e minimo vengono assegnati il primo valore della serie
    somma += numero; // Il numero viene aggiunto all'interno della variabile somma

    // Controllo che sia pari o dispari
    if(numero%2 == 0)
        pari++;
    else
        dispari++;

    // Iterazione controllata da contatore per l'inserimento dei numeri meno un inserimento
    for(int i = 0 ; i < N-1 ; i++) {

        // Inserimento del numero positivo
        puts("Inserisci un numero intero positivo:");
        do{
            scanf("%d", &numero);
        }while(numero < 0); // while(!(numero >= 0));

        // Inserimento del numero in somma
        somma += numero; // somma = somma + numero;

        // Controllo se è pari o dispari
        if(numero%2 == 0)
            pari++;
        else
            dispari++;

        // Verificare se il numero è maggiore del massimo precedente e sostituirlo
        if(numero > max)
            max = numero;

        // Verificare se il numero è minore del minore precedente e sostituirlo
        if(numero < min)
            min = numero;
    }

    // Mostrare i risultati finali
    printf("\n%s %d\n", "Numero dei pari:", pari);
    printf("%s %d\n", "Numero dei dispari:", dispari);
    printf("%s %d\n", "Massimo:", max);
    printf("%s %d\n", "Minimo:", min);
    printf("%s %.2f\n", "Media:", somma/N);

}
