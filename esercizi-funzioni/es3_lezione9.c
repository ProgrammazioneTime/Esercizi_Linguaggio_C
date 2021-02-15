#include <stdio.h>
/*  Esericizio 3:
    Inserito un valore N intero positivo effettuare i fattoriali fino a 0!
*/

long long unsigned fattoriale(int);

int main(void) {
    // 5! = 5*4*3*2*1*1

    int N;

    puts("Inserisci una quantita' N:");
    do{
        scanf("%d", &N);
    }while(N < 1); //while(!(N >= 1));

    // Ciclo che effettua i fattoriali da N a 0
    while(N >= 0) {
        // Mostra in output il fattoriale N
        printf("%d = %llu\n", N, fattoriale(N));
        N--;
    }
}

long long unsigned fattoriale(int n) {

    // Il fattoriale di 1 e 0 è 1
    if(n <= 1) {
        return 1;
    }

    // Chiamata per ricorsione
    return n * fattoriale(n-1);
}
