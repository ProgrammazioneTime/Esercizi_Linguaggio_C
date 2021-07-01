#include <stdio.h>
#define DIM 20
/*  Esercizio 1:
    Creare la funzione strlen
*/

int conta(char []);

int main(void) {
    char str[DIM];
    int lun;

    puts("Inserisci una parola:");
    scanf("%19s", str);
    //fgets(str,DIM,stdin);

    // Si assegna a lun la lunghezza di str
    lun = conta(str);

    // Si stampa in output la lunghezza di str salvata in lun
    printf("Lunghezza: %d\n", lun);
}

int conta(char s[]) {
    // Il numero di caratteri parte da 0
    int i = 0;

    // Il ciclo incrementa il numero di caratteri i
    // fino a quando il carattere i-esimo è diverso da '\0'
    while(s[i] != '\0') {
        i++;
    }

    return i;
}
