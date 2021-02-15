#include <stdio.h>
/*  Esercizio 4:
    Sequenza di fibonacci
    A   B   C
    1   1   2
    3   5   8
    13  21  34
    55  89  144
    ... ... ...
*/

int main(void) {

    /*
        c = a+b;
        a = c+b;
        b = a+c;
    */
    int a = 1, b = 0, c = 0; // Valori per la sequenza di fibonacci
    int riga; // Limite a cui arrivare

    // Inserimento della riga massima
    puts("Inserisci la riga massima:");
    do{
        scanf("%d", &riga);
    }while(riga < 1); // while(!(riga >= 1));

    puts(""); // Semplice invio a capo

    // Iterazione controllata da contatore
    for(int i = 0 ; i < riga ; ) {

        // Se il contatore è minore del limite stampa in output la a
        if(i < riga){
            printf("%d\n", a);
            i++;
        }

        // Se il contatore è minore del limite stampa in output la b
        b = a+c;
        if(i < riga){
            printf("%d\n", b);
            i++;
        }

        // Se il contatore è minore del limite stampa in output la c
        c = a+b;
        if(i < riga){
            printf("%d\n", c);
            i++;
        }

        a = c+b;
    }
}
