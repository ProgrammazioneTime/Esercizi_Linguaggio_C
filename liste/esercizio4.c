#include <stdio.h>
#include <stdlib.h>
/*
    Data una serie di numeri ordinarli in ordine crescente
*/

// Dichiarazione strutture
struct nodo {
    int valore;
    struct nodo *next; // puntatore alla struttura nodo
};

struct serie {
    struct nodo *testa; // puntatore alla struttura nodo
};


// Prototipi di funzione
void check_malloc(void *p);
struct serie *nuova_serie();
void inserisci(struct serie *serie, int val);
void print(struct serie *serie);


int main(void) {
    struct serie *serie = nuova_serie(); // Crea la serie della lista

	// Inserimento di dati
    inserisci(serie, 6);
    print(serie);
    inserisci(serie, 2);
    print(serie);
    inserisci(serie, 7);
    print(serie);
    inserisci(serie, 4);
    print(serie);
    inserisci(serie, 6);
    print(serie);

    return 0;
}

// Funzione che controlla se l'allocazione è andata a buon fine
void check_malloc(void *p) {

    if (p == NULL) {
    
        printf("Non e' possibile allocare in memoria\n");
        exit(-1);
        
    }
}

// Funzione che crea la lista
struct serie *nuova_serie() {
    struct serie *serie = malloc(sizeof(struct serie)); // Allocazione in memoria
	
    check_malloc(serie); // Controllo dell'allocazione
    serie->testa = NULL; // Il puntatore si imposta a puntare NULL

    return serie;
}

// Funzione che inserisce il numero
void inserisci(struct serie *serie, int val) {
    struct nodo *blocco = malloc(sizeof(struct nodo)); // Allocazione in memoria

    check_malloc(blocco); // Controllo dell'allocazione in memoria
    blocco->valore = val;

    struct nodo *attuale = serie->testa;
    struct nodo *prec = NULL;

	// Scala la grandezza dei valori già presenti in lista
    while (attuale != NULL) {
        if (attuale->valore >= val) {
            break;
        }
        prec = attuale;
        attuale = attuale->next;
    }
    blocco->next = attuale;

	// Aggiunge il nodo nella posizione corretta
    if (prec == NULL) {
        serie->testa = blocco;
    } else {
        prec->next = blocco;
    }
}

// Funzione che visualizza il contenuto della lista
void print(struct serie *serie) {
    if (serie->testa == NULL) {
        printf("La serie e' vuota.\n");
        return;
    }

    struct nodo *attuale = serie->testa;
    while (attuale != NULL) {
        printf("%i ", attuale->valore);
        attuale = attuale->next;
    }
    printf("\n");
}
