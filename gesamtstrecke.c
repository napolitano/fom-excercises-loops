#include <stdio.h>


int main () {
    int vorherigerOrt, ort, anzahl;
    int entfernung[5][5] = {
                                { 0, 2, 5,  9, 14},
                                { 0, 0, 7, 15, 27},
                                { 0, 0, 0,  9, 23},
                                { 0, 0, 0,  0, 12},
                                { 0, 0, 0,  0,  0}
                            };
    int ergebnis = 0; 

    do {
        printf("Wie viele Orte moechten Sie eingeben (1-x)");
        scanf("%d", &anzahl);

        if(!anzahl) {
            printf("/!\\ Die Anzahl darf nicht kleiner als 2 sein.\n\n");
        }

    } while(anzahl < 2);

    for(int i=0; i < anzahl; i++ ) {

        do {
            printf("Bitte geben Sie die %d. Ortsnummer (1-5) an: ");
            scanf("%d", &ort);

            if(ort < 1 || ort > 5) {
                printf("/!\\ Ihre Eingabe (%d) liegt ausserhalb des gueltigen Bereichs (1-5)\n\n", ort);
            }    

        } while (ort < 1 && ort > 5);

        if(!!i) {
            // Korrektur, falls zweiter Wert kleiner als erster Wert
            if(vorherigerOrt > ort) {
                ergebnis += entfernung[ort-1][vorherigerOrt-1]; 
            } else {
                ergebnis += entfernung[vorherigerOrt-1][ort-1]; 
            }
        }

        vorherigerOrt = ort;
    }

    printf("Die Entfernung zwischen den %d eingegebenen Orten betraegt %d\n", anzahl, ergebnis);
}