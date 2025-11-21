#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>

// Structure pour représenter une couleur RGBA
struct Couleur {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
};

// Structure pour stocker une couleur distincte et son nombre d'occurrences
struct CouleurCompteur {
    struct Couleur couleur;
    int compteur;
};

int main() {
    struct Couleur tableau[100];
    struct CouleurCompteur distinctes[100];
    int nb_distinctes = 0;
    
    // Initialisation du générateur de nombres aléatoires
    srand(time(NULL));
    
    // Remplissage du tableau avec des couleurs aléatoires
    for (int i = 0; i < 100; i++) {
        tableau[i].r = rand() % 256;
        tableau[i].g = rand() % 256;
        tableau[i].b = rand() % 256;
        tableau[i].a = rand() % 256;
    }
    
    // Comptage des couleurs distinctes
    for (int i = 0; i < 100; i++) {
        int trouve = 0;
        
        // Vérifier si la couleur existe déjà dans le tableau des distinctes
        for (int j = 0; j < nb_distinctes; j++) {
            if (distinctes[j].couleur.r == tableau[i].r &&
                distinctes[j].couleur.g == tableau[i].g &&
                distinctes[j].couleur.b == tableau[i].b &&
                distinctes[j].couleur.a == tableau[i].a) {
                // Couleur déjà trouvée, incrémenter le compteur
                distinctes[j].compteur++;
                trouve = 1;
                break;
            }
        }
        
        // Si la couleur n'existe pas encore, l'ajouter
        if (!trouve) {
            distinctes[nb_distinctes].couleur = tableau[i];
            distinctes[nb_distinctes].compteur = 1;
            nb_distinctes++;
        }
    }
    
    // Affichage des couleurs distinctes avec leur nombre d'occurrences
    printf("Couleurs distinctes et leur nombre d'occurrences :\n\n");
    for (int i = 0; i < nb_distinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
               distinctes[i].couleur.r,
               distinctes[i].couleur.g,
               distinctes[i].couleur.b,
               distinctes[i].couleur.a,
               distinctes[i].compteur);
    }
    
    printf("\nNombre total de couleurs distinctes : %d\n", nb_distinctes);
    
    return 0;
}
