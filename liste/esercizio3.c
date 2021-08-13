#include <stdio.h>
#include <stdlib.h>
#define MAX 32
/*
    Creare una rubrica con massimo 32 contatti e con le seguenti opzioni:
    1. Aggiungere un contatto
    2. Eliminare un contatto
    3. Modificare un contatto
    4. Visualizzare i dati di un contatto
    5. Uscire dal programma
*/

// Strutture con più membri di diverso tipo
struct indirizzo {
    char citta[20];
    int cap;
    char provincia[20];
    char via[20];
    int nc;
};

// Struttura autoreferenziale
struct informazioni {
    char nome[20];
    char cognome[20];
    char categoria[15];
    int telefono;
    struct indirizzo info;
    struct informazioni *next; // Puntatore alla struttura
};

// Alias della struttura informazioni
typedef struct informazioni Info;


// Prototipi di funzione
void *crea();
void *aggiungi(struct informazioni *);
void *cancella(struct informazioni *);
void *modifica(struct informazioni *);
void visualizza(struct informazioni *);


int main(void) {
    Info *contatti = crea(); // Creazione della lista
    int numcon = 0; // Numero contatti = 0
    int sc = 0; // Scelta dell'utente

    while(sc != 5) {
        puts("Scegli una delle seguenti opzioni:");
        puts("1. Aggiungere un contatto");
        puts("2. Eliminare un contatto");
        puts("3. Modificare un contatto");
        puts("4. Visualizzare i dati di un contatto");
        puts("5. Uscire dal programma");
        printf("\n-> ");
        scanf("%d", &sc);

        printf("\n\n");
        switch(sc) {
        
            case 1:
                numcon++;
                // Controllo se il numero dei contatti
                // supera la soglia massima di 32
                if(numcon > MAX) {
                    puts("Lista contatti piena, bisogna liberare spazio.");
                    numcon = MAX;
                } else {
                    contatti = aggiungi(contatti);
                }
                
                break;

            case 2:
                numcon--;
                // Controllo se il numero dei contatti
                // supera la soglia minima di 0
                if(numcon < 0) {
                    puts("Lista contatti vuota, impossibile cancellare contatti.");
                    numcon = 0;
                } else {
                    contatti = cancella(contatti);
                }
                
                break;

            case 3:
            	// Controllo se la lista contatti è vuota
                if(numcon < 1) {
                    puts("Lista contatti vuota, impossibile modificare contatti.");
                } else {
                    contatti = modifica(contatti);
                }
                
                break;

            case 4:
            	// Controllo se la lista contatti è vuota
                if(numcon < 1) {
                    puts("Lista contatti vuota, impossibile visualizzare contatti.");
                } else {
                    visualizza(contatti);
                }
                
                break;

            case 5:
            
                puts("Chiusura del programma.");
                
                break;

            default:
            
                puts("\nScelta non valida.");
                
                break;
        }
        
        printf("\n\n");
    }
}

// Funzione che crea il nodo terminatore
void *crea() {
    Info *terminatore = malloc(sizeof(Info)); // Allocazione dello spazio in memoria

	// Controllo della corretta allocazione
    if(terminatore == NULL) {
        printf("Non c'e' abbastanza memoria.\n");
        exit(-1);
    }
	
	// Essendo il nodo terminatore punta a NULL
    terminatore->next = NULL;

    return terminatore;
}

// Funzione che aggiunge il contatto
void *aggiungi(struct informazioni *prec) {
    Info *nodo = malloc(sizeof(Info)); // Allocazione dello spazio in memoria

	// Controllo della corretta allocazione
    if(nodo == NULL) {
        printf("Non c'e' abbastanza memoria.\n");
        exit(-1);
    }

    nodo->next = prec;

	// Inserimento dati
	
    printf("inserisci il nome: ");
    scanf("%19s", nodo->nome);

    printf("inserisci il cognome: ");
    scanf("%19s", nodo->cognome);

    printf("inserisci la categoria: ");
    scanf("%14s", nodo->categoria);

    printf("inserisci il numero di telefono: ");
    scanf("%i", &nodo->telefono);

    printf("inserisci la citta': ");
    scanf("%19s", nodo->info.citta);

    printf("inserisci il CAP: ");
    scanf("%i", &nodo->info.cap);

    printf("inserisci la provincia: ");
    scanf("%19s", nodo->info.provincia);

    printf("inserisci la via: ");
    scanf("%19s", nodo->info.via);

    printf("inserisci il numero civico: ");
    scanf("%i", &nodo->info.nc);


    return nodo;
}

// Funzione che cancella il contatto
void *cancella(struct informazioni *lista) {
    Info *prec, *succ, *temp;
    int i, sc;

    temp = prec = lista;

    puts("Scegli il contatto da eliminare:");
    for(i = 1 ; temp->next != NULL ; i++) {
        printf("%d. %s %s\n", i, temp->nome, temp->cognome);
        temp = temp->next;
    }
    printf("\n-> ");
    do{
        scanf("%d", &sc);
    }while(sc < 1 || sc > i);

    temp = prec;
    
    // Si scala la lista per trovare il contatto
    // selezionato dal numero dell'utente

    if(sc == 1) {
        temp = temp->next;
        free(prec);
    } else {
        for(i = 1 ; i != sc ; i++) {
            prec = temp;
            temp = temp->next;
            succ = temp->next;
        }
        prec->next = succ;
        free(temp);
        temp = lista;
    }

    return temp;
}

// Funzione che modifica un contatto
void *modifica(struct informazioni *lista) {
    Info *temp;
    int i, sc;

    temp = lista;

    puts("Scegli il contatto da modificare:");
    for(i = 1 ; temp->next != NULL ; i++) {
        printf("%d. %s %s\n", i, temp->nome, temp->cognome);
        temp = temp->next;
    }
    printf("\n-> ");
    do{
        scanf("%d", &sc);
    }while(sc < 1 || sc > i);

    temp = lista;

    for(i = 1 ; i != sc ; i++) {
        temp = temp->next;
    }

	// Inserimento dei nuovi dati

    puts("\nModifica del contatto:");
    printf("inserisci il nome: ");
    scanf("%19s", temp->nome);

    printf("inserisci il cognome: ");
    scanf("%19s", temp->cognome);

    printf("inserisci la categoria: ");
    scanf("%14s", temp->categoria);

    printf("inserisci il numero di telefono: ");
    scanf("%i", &temp->telefono);

    printf("inserisci la citta': ");
    scanf("%19s", temp->info.citta);

    printf("inserisci il CAP: ");
    scanf("%i", &temp->info.cap);

    printf("inserisci la provincia: ");
    scanf("%19s", temp->info.provincia);

    printf("inserisci la via: ");
    scanf("%19s", temp->info.via);

    printf("inserisci il numero civico: ");
    scanf("%i", &temp->info.nc);

    return lista;
}


// Funzione che visualizza la lista dei contatti
void visualizza(struct informazioni *lista) {
    Info *inizio;
    int i, sc;

    inizio = lista;

    puts("Scegli il contatto da visualizzare:");
    for(i = 1 ; lista->next != NULL ; i++) {
        printf("%d. %s %s\n", i, lista->nome, lista->cognome);
        lista = lista->next;
    }
    printf("\n-> ");
    do{
        scanf("%d", &sc);
    }while(sc < 1 || sc > i);

    lista = inizio;

	// Scala la lista per arrivare al contatto
    for(i = 1 ; i != sc ; i++) {
        lista = lista->next;
    }
	
	// Dati contatto
	
    puts("\nInformazioni del contatto:");
    printf("Nome: %s\n", lista->nome);
    printf("Cognome: %s\n", lista->cognome);
    printf("Categoria: %s\n", lista->categoria);
    printf("Numero di telefono: %d\n", lista->telefono);
    printf("Citta': %s\n", lista->info.citta);
    printf("CAP: %d\n", lista->info.cap);
    printf("Provincia: %s\n", lista->info.provincia);
    printf("Via: %s\n", lista->info.via);
    printf("Numero civico: %d\n", lista->info.nc);

}
