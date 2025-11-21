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
    
    // Tri du tableau (tri à bulles)
    for (int i = 0; i < 99; i++) {
        for (int j = 0; j < 99 - i; j++) {
            if (tableau[j] > tableau[j + 1]) {
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
    
    // Affichage du tableau trié
    printf("Tableau trié :\n");
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
    
    // Recherche dichotomique (binary search)
    int gauche = 0;
    int droite = 99;
    
    while (gauche <= droite) {
        int milieu = (gauche + droite) / 2;
        
        if (tableau[milieu] == nombre_cherche) {
            trouve = 1;
            break;
        } else if (tableau[milieu] < nombre_cherche) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
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
