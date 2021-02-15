#include <stdio.h>
#include <math.h>
/*  Esericizio 2:
    Dati i coefficienti di una equazione di secondo grado:
    ax^2 + bx + c = 0
    Determinare i punti di intersezione con l'asse delle X
*/

void equazione(int , int , int);

float risolvi1(int , int , int);
float risolvi2(int , int , int);

int main(void) {

    int a, b, c;

    // Inserimento dei coefficenti
    puts("Inserisci il coefficiente di x alla seconda:");
    scanf("%d", &a);
    puts("Inserisci il coefficiente di x:");
    scanf("%d", &b);
    puts("Inserisci il termine noto:");
    scanf("%d", &c);

    equazione(a,b,c);

}

void equazione(int a, int b, int c) {
    // Caso in cui l'equazione non è di secondo grado
    if(a == 0) {
        puts("Non e' una equazione di secondo grado.");
        return;
    }

    int delta;

    delta = b*b - 4*a*c; // Calcolo del delta

    // x = (-b +- sqrt(delta)) / 2*a

    // Casi dell'equazione di secondo grado
    if(delta > 0) {
        puts("\nCi sono due punti di intersezione.");
        printf("\n%s %.2f\n", "x1 vale:", risolvi1(b,delta,a));
        printf("\n%s %.2f\n", "x2 vale:", risolvi2(b,delta,a));
    } else if(delta == 0) {
        puts("\nC'e' solo un punto di intersezione.");
        printf("\n%s %.2f\n", "x vale:", risolvi1(b,delta,a));
    } else {
        puts("\nNon ci sono punti di intersezione.");
    }
}

float risolvi1(int b, int delta, int a) {
    // potenza = 2
    // radice = 1/2
    float x;

    x = (float) -b + sqrt(delta);
    x /= (float) 2*a;

    return x;

}

float risolvi2(int b, int delta, int a) {
    // potenza = 2
    // radice = 1/2
    float x;

    x = (float) -b - sqrt(delta);
    x /= (float) 2*a;

    return x;

}
