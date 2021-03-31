#include <stdio.h>
#define DIM 10
/*  Esercizio 2:
    Data una sequenza di 10 numeri interi ordinarli in modo
    crescente e decrescente su due vettori differenti.
*/

void ordinamento_c(int []);
void ordinamento_d(int []);


int main(void) {
    // Dichiarazione di variabili
    int crescente[DIM];
    int decrescente[DIM];

    // Inserimento dei valori da tasiera
    puts("Inserisci 10 valori interi:");
    for(size_t i = 0 ; i < DIM ; i++) {
        scanf("%d", &crescente[i]);
        decrescente[i] = crescente[i];
    }

    // Richiamo le funzioni per l'ordinamento
    ordinamento_c(crescente);
    ordinamento_d(decrescente);
}

void ordinamento_c(int vet[]) {
    // 2 4 7 8 0 9 1 3 5 6
    // 2 4 9 7 0 8 1 3 5 6

    int temp; // Questa variabile temporanea serve per gli scambi di valori

    // Ciclo annidato per gestire ogni valore del vettore
    // e per confrontarlo nuovamente con ogni valore
    for(size_t i = 0 ; i < DIM ; i++) {
        for(size_t j = 0 ; j < DIM ; j++) {
            // Se il valore i-esimo è minore dei
            // valori analizzati alla posizione j-esima
            // allora devono essere scambiati
            if(vet[i] < vet[j]) {
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }

    // Mostra in output il vettore
    for(size_t i = 0 ; i < DIM ; i++) {
        printf("%d ", vet[i]);
    }
    puts("");
}

void ordinamento_d(int vet[]) {

    int temp; // Questa variabile temporanea serve per gli scambi di valori

    // Ciclo annidato per gestire ogni valore del vettore
    // e per confrontarlo nuovamente con ogni valore
    for(size_t i = 0 ; i < DIM ; i++) {
        for(size_t j = 0 ; j < DIM ; j++) {
            // Se il valore i-esimo è minore dei
            // valori analizzati alla posizione j-esima
            // allora devono essere scambiati
            if(vet[i] > vet[j]) {
                temp = vet[i];
                vet[i] = vet[j];
                vet[j] = temp;
            }
        }
    }

    // Mostra in output il vettore
    for(size_t i = 0 ; i < DIM ; i++) {
        printf("%d ", vet[i]);
    }
    puts("");
}
