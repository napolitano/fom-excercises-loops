#include <stdio.h>

/**
 * @brief Schreiben Sie ein Programm, das eine vom 
 * Benutzer festgelegte Anzahl von Zahlen einliest 
 * und anschließend die größte und die kleinste der 
 * eingegebenen Zahlen auf dem Bildschirm ausgibt
 * 
 * @return int 
 */
int main () {

    int smallest = 0, biggest = 0, anzahl, eingabe;

    printf("Wie viele Zahlen moechten Sie eingeben?");
    scanf("%d", &anzahl);

    for(int i = 1; i <= anzahl; i++) {
        printf("Bitte geben sie die %d. Zahl ein: ", i);
        scanf("%d", &eingabe);

        if(i == 1) {
            smallest = eingabe;
            biggest = eingabe;
        }

        if( eingabe < smallest) {
            smallest = eingabe;
        }

        if (eingabe > biggest) {
            biggest = eingabe;
        }
    }

    printf("Die groesste eingegebene Zahl lautet %d\n", biggest);
    printf("Die kleinste eingegebene Zahl lautet %d\n" , smallest);

    return 0;
}