#include <stdio.h>
/*  Esercizio 4:
    Data serie N di voti (dal 4 al 10) determinare la media,
    mostrare in output il risutato e dire l'alunno è promosso o bocciato.
*/
float calcola(int [*], float);

int main(void) {
    // Dichiarazione variabili
    int N;
    float media;

    // Inserimento del numero dei voti
    puts("Inserisci il numero dei tuoi voti:");
    do{
        scanf("%d", &N);
    }while(N <= 0); // while(!(N > 0));

    int voti[N]; // Vettore VLA

    // Inserimento voti
    for(size_t i = 0 ; i < N ; i++) {
        do{
            scanf("%d", &voti[i]);
        }while(voti[i] < 4 || voti[i] > 10); // while(!(voti[i] >= 4 && voti[i] <= 10));
    }

    // Si calcola la media tramite la funzione calcola
    // passando come parametri il numero di voti e il vettore
    media = calcola(voti,N);

    // Si controlla se la media è da promozione o bocciatura
    puts("");
    if(media >= 6.0) {
        puts("L'alunno e' promosso.");
        printf("%s %.2f\n\n", "Media:", media);
    } else {
        puts("L'alunno e' bocciato.");
        printf("%s %.2f\n\n", "Media:", media);
    }

}

float calcola(int vet[], float num) {

    float somma = 0.0;

    // Si calcola la somma di tutti i valori del vettore
    for(size_t i = 0 ; i < num ; i++) {
        somma += vet[i];
    }

    // Si ritorna la media
    return (float) (somma/num);
}
