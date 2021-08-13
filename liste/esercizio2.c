#include <stdio.h>
#define MAX 9
#define MIN 0
/*
    Considerare la regione di piano cartesiano individuata dalle
    ascisse comprese tra 0 e 9 e dalle ordinate comprese tra 0 e 9.
    Scrivere un programma che chieda all'utente le coordinate di due punti
    A e B e disegnare il rettangolo con gli asterischi.
*/

// Struttura con due membri di tipo intero
struct punto {
    int x;
    int y;
};


// Prototipi di funzione
struct punto inserisci();
_Bool check(struct punto);
void stampa(struct punto, struct punto);


int main(void) {
	// Dichiarazione variabili di tipo struttura punto
    struct punto p1, p2;

	// Richiesta di inserimento Punto A e Punto B
    puts("Punto A");
    p1 = inserisci();

    puts("Punto B");
    p2 = inserisci();

    printf("\n\n");
    
    stampa(p1,p2);	// Stampa del rettangolo
    
    printf("\n\n");
}

// Funzione per l'inserimento del Punto
struct punto inserisci() {
    struct punto temp;	// Variabile temporanea struttura punto

    do{
        puts("Inserisci le coordinate (x,y):");
        scanf("%d,%d", &temp.x, &temp.y);
    }while(check(temp));

    return temp;
}

// Funzione che controlla il punto
_Bool check(struct punto p) {
    if(p.x < MIN || p.y < MIN || p.x > MAX || p.y > MAX) {
        return 1;
    }

    return 0;
}

// Funzione che disegna il rettangolo
void stampa(struct punto p1, struct punto p2) {
    for(int i = MAX ; i >= MIN ; i--) {
        printf("%d ", i);

        for(int j = MIN ; j <= MAX ; j++) {
        
            if(i <= p1.y && i >= p2.y || i <= p2.y && i >= p1.y) {
            
                if(j <= p1.x && j >= p2.x || j <= p2.x && j >= p1.x) {
                
                    printf("* ");
                    
                } else {
                
                    printf(" ");
                    
                }
            }
        }
        printf("\n");
    }

    printf("  ");
    for(int i = MIN ; i <= MAX ; i++) {
        printf("%d ", i);
    }
}
