#include <stdio.h>

/**
 * @brief Schreiben Sie ein Programm, das alle durch 7 
 * teilbaren Zahlen zwischen zwei zuvor eingegebenen 
 * Grenzen ausgibt!
 * 
 * @return int 
 */
int main () {

    int untereGrenze, obereGrenze;

    printf("Bitte geben Sie die untere Grenze ein (ganze Zahl): " );
    scanf("%d", &untereGrenze);

    printf("Bitte geben Sie die obere Grenze ein (ganze Zahl): ");
    scanf("%d", &obereGrenze);

    if(untereGrenze == obereGrenze) {
        printf("/!\\ Die obere und untere Grenze duerfen nicht identisch sein.");
        return 0;
    } 

    if(untereGrenze > obereGrenze) {
        printf("/!\\ Die obere Grenze muss groesser als die untere Grenze sein.");
        return 0;
    }

    for(int i= untereGrenze; i <= obereGrenze; i++) {
        if(!(i % 7)) {
            printf("%d\n", i);
        }
    }

    return 0;
}