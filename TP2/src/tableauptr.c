#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 11

int main() {
    int tab_int[SIZE];
    float tab_float[SIZE];

    // Initialisation du generateur aleatoire
    srand(time(NULL));

    // Remplissage avec des valeurs aleatoires
    // Utilisation de pointeurs pour le parcours
    int *p_int = tab_int;
    float *p_float = tab_float;

    for (int i = 0; i < SIZE; i++) {
        *(p_int + i) = rand() % 100; // Valeurs entre 0 et 99
        *(p_float + i) = (float)rand() / (float)(RAND_MAX) * 100.0f; // Valeurs float entre 0.0 et 100.0
    }

    // Affichage avant multiplication
    printf("Tableau d'entiers (avant) :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(p_int + i));
    }
    printf("\n\n");

    printf("Tableau de float (avant) :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", *(p_float + i));
    }
    printf("\n\n");

    // Multiplication par 3 des valeurs aux indices divisibles par 2
    // Sans utiliser l'operateur []
    for (int i = 0; i < SIZE; i++) {
        if (i % 2 == 0) {
            *(p_int + i) *= 3;
            *(p_float + i) *= 3.0f;
        }
    }

    // Affichage apres multiplication
    printf("Tableau d'entiers (apres) :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", *(p_int + i));
    }
    printf("\n\n");

    printf("Tableau de float (apres) :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%.2f ", *(p_float + i));
    }
    printf("\n");

    return 0;
}
