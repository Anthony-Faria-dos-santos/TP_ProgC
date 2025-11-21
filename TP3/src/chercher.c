#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tableau[100];
    int nombre_cherche;
    int trouve = 0;
    
    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));
    
    // Remplissage du tableau avec des valeurs aléatoires entre -100 et 999
    for (int i = 0; i < 100; i++) {
        tableau[i] = (rand() % 1100) - 100;
    }
    
    // Affichage du tableau
    printf("Tableau :\n");
    for (int i = 0; i < 100; i++) {
        printf("%d ", tableau[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
    printf("\n");
    
    // Demande à l'utilisateur l'entier à chercher
    printf("Entrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &nombre_cherche);
    
    // Recherche linéaire dans le tableau
    for (int i = 0; i < 100; i++) {
        if (tableau[i] == nombre_cherche) {
            trouve = 1;
            break;
        }
    }
    
    // Affichage du résultat
    if (trouve) {
        printf("\nRésultat : entier présent\n");
    } else {
        printf("\nRésultat : entier absent\n");
    }
    
    return 0;
}
