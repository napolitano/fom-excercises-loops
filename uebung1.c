#include <stdio.h>

/**
 * @brief Erstellen Sie ein Programm, das
 * den Benutzer zunächst fragt, wie viele Zahlen er eingeben 
 * möchte, dann entsprechend viele Zahlen eingeben lässt,
 * unabhängig voneinander die positiven und die negativen 
 * Eingaben summiert und ausgibt
 * 
 * @return int 
 */
int main () {
    int summePositiv = 0, summeNegativ = 0, anzahl, puffer;

    printf("Wie viele Zahlen moechten Sie eingeben?");
    scanf("%d", &anzahl);

    for(int i=1; i <= anzahl; i++) {
        printf("Bitte geben sie die %d. Zahl ein: ", i);
        scanf("%d", &puffer);

        if(puffer >= 0) {
            summePositiv += puffer;
        } else {
            summeNegativ += puffer;
        }
    }

    printf("Die Summe der positiven Zahlen lautet %d\n", summePositiv);
    printf("Die Summe der negativen Zahlen lautet %d\n" , summeNegativ);

    return 0;
}