#include <stdio.h>
/*  Esericizio 4:
    Inserito un numero N intero positivo, trovare il corrispondente
    nella serie di Fibonacci, esempio:
    N = 3
    Fibonacci(10)

    N = 10
    Fibonacci(10) = 55
*/

unsigned fibonacci(int);

int main(void) {
    int N;

    puts("Inserisci la posizione N:");
    do{
        scanf("%d", &N);
    }while(N < 0); //while(!(N >= 0));

    // Mostra in output la posizione di Fibonacci
    printf("%s %u", "La posizione corrispettiva e':", fibonacci(N));
}

unsigned fibonacci(int n) {
    // Se vale 0 oppure 1 ritorna 0 oppure 1
    if(n == 0 || n == 1) {
        return n;
    }

    // Chiamata per ricorsione
    return fibonacci(n-1)+fibonacci(n-2);
}
