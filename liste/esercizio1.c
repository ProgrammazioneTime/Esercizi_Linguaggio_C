#include <stdio.h>
/*
    Scrivere un programma che calcola il tempo trascorso (ore,minuti,secondi)
    dati due istanti di tempo con la seguente formattazione: %i:%i:%i
*/

// Struttura con tre membri di tipo intero
struct tempo {
    int ore;
    int min;
    int sec;
};


// Prototipi di funzione
struct tempo inserisci();
_Bool check(struct tempo);
struct tempo trascorso(struct tempo, struct tempo);


int main(void) {
	// Dichiarazione variabili di tipo struttura tempo
    struct tempo t1, t2, t3;

	// Richiesta di inserimento Tempo 1 e Tempo 2
    puts("Tempo 1");
    t1 = inserisci();

    puts("\nTempo 2");
    t2 = inserisci();

	// Calcolo della differenza di tempo trascorso
    t3 = trascorso(t1,t2);

    puts("\nIl tempo trascorso e' di:");
    printf("%d ore, %d minuti e %d secondi.\n\n", t3.ore, t3.min, t3.sec);

}

// Funzione per l'inserimento del Tempo
struct tempo inserisci() {
    struct tempo temp; // Variabile temporanea struttura tempo

    do{
        printf("Inserisci l'istante di tempo: ");
        scanf("%i:%i:%i", &temp.ore, &temp.min, &temp.sec);
    }while(check(temp));

    return temp;
}

// Funzione che controlla l'orario
_Bool check(struct tempo t) {
    if(t.ore < 0 || t.ore > 23) {
        return 1;
    }

    if(t.min < 0 || t.min > 59) {
        return 1;
    }

    if(t.sec < 0 || t.sec > 59) {
        return 1;
    }

    return 0;
}

// Funzione che calcola il tempo trascorso
struct tempo trascorso(struct tempo t1, struct tempo t2) {
    struct tempo temp;

    temp.sec = t1.sec - t2.sec;
    if(temp.sec < 0) {
        t1.min = t1.min - 1;
        temp.sec = temp.sec + 60;
    }

    temp.min = t1.min - t2.min;
    if(temp.min < 0) {
        t1.ore = t1.ore - 1;
        temp.min = temp.min + 60;
    }

    temp.ore = t1.ore - t2.ore;
    if(temp.ore < 0) {
        temp.ore = temp.ore + 24;
    }

    return temp;
}
