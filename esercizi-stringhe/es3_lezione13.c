#include <stdio.h>
#define DIM 50
/*  Esercizio 3:
    Presa in input una stringa formata da più parole
    sostituire le vocali con il '.' , le consonanti con
    il '-' e gli spazi con '*'.
*/

int main(void) {
    char str[DIM];

    puts("Inserisci una stringa:");
    fgets(str,DIM,stdin);

    // Si valuta la stringa carattere per carattere fino alla conclusione
    // str[i] != '\0'
    for(int i = 0 ; str[i] ; i++) {
        switch(str[i]) {
            // Per le vocali si sostituisce con il '.'
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                str[i] = '.';
            break;

            // Per lo spazio vuoto si sostituisce con il '*'
            case ' ':
                str[i] = '*';
                break;

            // In questi due casi non si fa nulla
            case '\n':
            case '\t':
                break;

            // Per le consonanti si sostituisce con il '-'
            default:
                str[i] = '-';
                break;
        }
    }

    // Visualizza in output la stringa modificata
    printf("\n%s\n", str);
}
