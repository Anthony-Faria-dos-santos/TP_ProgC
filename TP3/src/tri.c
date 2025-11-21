#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    
    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));
    
    // Remplissage du tableau avec des valeurs aléatoires entre -100 et 999
    for (int i = 0; i < 100; i++) {
        tableau[i] = (rand() % 1100) - 100;
    }
    
    // Affichage du tableau non trié
    printf("Tableau non trié :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    
    // Tri à bulles (bubble sort)
    for (int i = 0; i < 99; i++) {
        for (int j = 0; j < 99 - i; j++) {
            if (tableau[j] > tableau[j + 1]) {
                // Échange des éléments
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
    
    // Affichage du tableau trié
    printf("Tableau trié par ordre croissant :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    
    return 0;
}
