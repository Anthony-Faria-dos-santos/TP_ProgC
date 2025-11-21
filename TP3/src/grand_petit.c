#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    int plus_grand, plus_petit;
    
    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));
    
    // Remplissage du tableau avec des valeurs aléatoires entre 1 et 1000
    for (int i = 0; i < 100; i++) {
        tableau[i] = (rand() % 1000) + 1;
    }
    
    // Initialisation avec la première valeur
    plus_grand = tableau[0];
    plus_petit = tableau[0];
    
    // Parcours du tableau pour trouver le plus grand et le plus petit
    for (int i = 1; i < 100; i++) {
        if (tableau[i] > plus_grand) {
            plus_grand = tableau[i];
        }
        if (tableau[i] < plus_petit) {
            plus_petit = tableau[i];
        }
    }
    
    // Affichage des résultats
    printf("Le numéro le plus grand est : %d\n", plus_grand);
    printf("Le numéro le plus petit est : %d\n", plus_petit);
    
    return 0;
}
