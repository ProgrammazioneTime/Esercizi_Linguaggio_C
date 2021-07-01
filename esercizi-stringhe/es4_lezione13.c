#include <stdio.h>
#include <string.h>
#define DIM 20
/*  Esercizio 4:
    Controllare se una stringa � palindroma.
*/

int main(void) {
    char str[DIM];
    int lun, check = 0;

    puts("Inserisci una parola:");
    scanf("%19s", str);

    // Si salva in lun la lunghezza-1 della stringa
    // I caratteri lun-esimi partiranno dal fondo della stringa
    lun = strlen(str) - 1;

    // Si gestisce carattere per carattere la stringa fino alla sua met�
    for(int i = 0 ; i < strlen(str)/2 ; i++) {

        // Se il carattere i-esimo � diverso da quello lun-esimo
        // Allora la stringa non � palindroma
        if(str[i] != str[lun]) {
            // Si imposta a 1 la flag check
            check = 1;
            i = strlen(str);
        }

        // Si decrementa il carattere lun-esimo
        lun--;
    }

    // In base alla flag check si stampa se � o non � palindroma
    if(check) {
        puts("La stringa non e' palindroma.");
    } else {
        puts("La stringa e' palindroma.");
    }
}
