#include <stdio.h>


int main () {
    int ort1, ort2;
    int entfernung[5][5] = {
                                { 0, 2, 5,  9, 14},
                                { 0, 0, 7, 15, 27},
                                { 0, 0, 0,  9, 23},
                                { 0, 0, 0,  0, 12},
                                { 0, 0, 0,  0,  0}
                            };
    int ergebnis; 

    do {
        printf("Bitte geben Sie die erste Ortsnummer (1-5) an: ");
        scanf("%d", &ort1);

        printf("Bitte geben Sie die zweite Ortsnummer (1-5) an: ");
        scanf("%d", &ort2);

        if(ort1 < 1 || ort2 < 1 || ort1 > 5 || ort2 > 5) {
            printf("/!\\ Ihre Eingaben für Ort 1 (%d) und Ort 2 (%d) liegen ausserhalb des gueltigen Bereichs (1-5)\n\n", ort1, ort2);
        }    
    } while (ort1 < 1 && ort2 < 1 && ort1 > 5 && ort2 > 5);

    // Korrektur, falls zweiter Wert kleiner als erster Wert
    if(ort1 > ort2) {
        ergebnis = entfernung[ort2-1][ort1-1]; 
    } else {
        ergebnis = entfernung[ort1-1][ort2-1]; 
    }

    printf("Die Entfernung zwischen beiden Orten betraegt %d\n", ergebnis);
}