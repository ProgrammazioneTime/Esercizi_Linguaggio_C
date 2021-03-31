#include <stdio.h>
#define DIM 10
/*  Esercizio 3:
    Inserire una sequenza di 10 numeri interi positivi.
    Fare uno shift destro e sinistro in due vettori differenti.

    0 1 2 3 4 5 6 7 8 9

    1 2 3 4 5 6 7 8 9 0  sx
    9 0 1 2 3 4 5 6 7 8  dx
*/

void shift_dx(int []);
void shift_sx(int []);


int main(void) {
    // Dichiarazione delle variabili
    int dx[DIM];
    int sx[DIM];

    // Inserimento dei valori da tastiera
    puts("Inserisci 10 valori interi positivi:");
    for(size_t i = 0 ; i < DIM ; i++) {
        do{
            scanf("%d", &dx[i]);
        }while(dx[i] < 0); // while(!(dx[i] >= 0));
        sx[i] = dx[i];
    }

    // Richiamo delle funzioni per l'ordinamento
    shift_dx(dx);
    shift_sx(sx);

    // Si mostra in output i vettori una volta
    // completato lo shift dx e sx
    puts("");
    for(size_t i = 0 ; i < DIM ; i++) {
        printf("%d ", dx[i]);
    }
    puts("");

    for(size_t i = 0 ; i < DIM ; i++) {
        printf("%d ", sx[i]);
    }
    puts("");

}

void shift_dx(int vet[]) {
    // Si affida alla variabile temporanea
    // il valore che andrebbe perso
    int temp = vet[DIM-1];

    // Si spostano i valori di un posto a sinistra
    for(size_t i = DIM-1 ; i > 0 ; i--){
        vet[i] = vet[i-1];
    }

    // Si assegna il valore memorizzato all'inizio
    vet[0] = temp;
}

void shift_sx(int vet[]) {
    // Si affida alla variabile temporanea
    // il valore che andrebbe perso
    int temp = vet[0];

    // Si spostano i valori di un posto a sinistra
    for(size_t i = 0 ; i <= DIM-1 ; i++){
        vet[i] = vet[i+1];
    }

    // Si assegna il valore memorizzato all'inizio
    vet[DIM-1] = temp;
}
