#include <stdio.h>
#define DIM 20
/*  Esercizio 2:
    Scrivere un programma C che richiede all'utente di inserire
    una parola e fornisce:
    • la lunghezza della parola,
    • il numero di vocali contenute nella parola,
    • il numero di consonanti contenute nella parola.
*/

int conta(char []);
int lettere(int , char []);

int main(void) {
    char str[DIM];
    int lun, voc = 0, cons = 0;

    puts("Inserisci una parola:");
    scanf("%19s", str);

    // Si assegna a lun la lunghezza di str
    lun = conta(str);

    // Si passa come parametro str e due flag per
    // volere le consonanti (1) o vocali (0)
    voc = lettere(0,str);
    cons = lettere(1,str);

    // Si visualizza la lunghezza di str
    printf("La parola e' lunga: %d\n", lun);

    // Si visualizza il numero di vocali
    printf("Numero vocali: %d\n", voc);

    // Si visualizza il numero di consonanti
    printf("Numero consonanti: %d\n", cons);

}

int conta(char s[]) {
    // Il numero di caratteri parte da 0
    int i = 0;

    // Il ciclo incrementa il numero di caratteri i
    // fino a quando il carattere i-esimo è diverso da '\0'
    while(s[i]) { // s[i] != '\0'
        i++;
    }

    return i;
}

// In base alla flag tipo si contano le vocali (0) o consonanti (1)
int lettere(int tipo, char s[]) {
    int tot = 0;

    // Si valuta carattere per carattere la stringa s
    for(int i = 0 ; s[i] ; i++) {
        switch(s[i]) {
            // Casi delle vocali
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                if(tipo == 0) { // Se la flag è 0 allora permette l'incremento di tot
                    tot++;
                }
                break;

            // Il resto dei casi riguarda le consonanti
            default:
                if(tipo == 1) { // Se la flag è 1 allora permette l'incremento di tot
                    tot++;
                }
                break;
        }
    }

    return tot;
}
