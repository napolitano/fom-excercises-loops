#include <stdio.h>

int main () {

    int zahlen[5], min, max, summe=0, anzahl, eingabe;

    do {
        printf("Wie viele Zahlen moechten Sie eingeben (max. 5): ");
        scanf("%d", &anzahl);

        if(anzahl > 5) {
            printf("/!\\ Die maximale Anzahl darf 5 nicht ueberschreiten.\n\n");
        }
    } while (anzahl > 5);

    for(int i=0; i < anzahl; i++ ) {
        printf("Bitte geben Sie die %d. Zahl ein (ganze Zahl): ", i+1);
        scanf("%d", &eingabe);
        zahlen[i] = eingabe;
    }

    for(int i=0; i < anzahl; i++) {
        summe += zahlen[i];

        if(!i) {
            min = zahlen[i];
            max = zahlen[i];
        }

        if(eingabe < min) {
            min = zahlen[i];
        }
        
        if (eingabe > max) {
            max = zahlen[i];
        }
    }

    printf("Die kleinste eingegebene Zahl ist die %d\n", min);
    printf("Die groesste eingegebene Zahl ist die %d\n", max);
    printf("Der Durchschnitt der eingegebenen Zahlen lautet %f\n", (float)summe / anzahl);

}