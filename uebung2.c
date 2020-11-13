#include <stdio.h>

/**
 * @brief Schreiben Sie ein Programm, das 
 * zwei ganze Zahlen von der Tastatur einliest
 * und anschließend deren Summe, Differenz, 
 * Produkt, den Quotienten und den
 * Divisionsrest auf dem Bildschirm ausgibt! 
 * Bedenken Sie dabei mögliche Sonderfälle!
 * 
 * Die Eingabe beginnt immer wieder von vorne und bricht das 
 * Programm ab,sobald der Benutzer die Ziffer 0 als erste 
 * Zahl eingibt. 
 * 
 * @return int 
 */
int main () {
    
    int zahl1, zahl2;

    for (;;) {
        printf("Bitte geben Sie die erste Zahl ein (ganze Zahl):");
        scanf("%d", &zahl1);

        if(zahl1 == 0) {
            break;
        }

        printf("Bitte geben Sie die zweite Zahl ein (ganze Zahl):");
        scanf("%d", &zahl2);

        if(zahl2 == 0) {
            printf("/!\\ Eine Division durch 0 ist nicht moeglich.\nBitte versuchen Sie es erneut.\n\n");
            continue;
        }

        printf("Die Summe von %d und %d ist: %d\n", zahl1, zahl2, zahl1 + zahl2);
        printf("Die Differenz von %d und %d ist: %d\n", zahl1, zahl2, zahl1 - zahl2);
        printf("Das Produkt von %d und %d ist: %d\n", zahl1, zahl2, zahl1 * zahl2);
        printf("Der Quotient von %d und %d ist: %f\n", zahl1, zahl2, (float)zahl1 / zahl2);
        printf("Der Divisionsrest von %d und %d ist: %f\n\n", zahl1, zahl2, (float)(((zahl1 % zahl2) + zahl2) % zahl2));
    }

    return 0;
}