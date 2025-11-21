#include <stdio.h>

int main() {
    int compteur = 5;
    
    // Vérifie si le compteur est strictement inférieur à 10
    if (compteur >= 10) {
        printf("Compteur doit être strictement inférieur à 10.\n");
        return 1;
    }

    int i = 1;
    while (i <= compteur) {
        int j = 1;
        while (j <= i) {
            // Affiche '*' pour la première colonne, la diagonale ou la dernière ligne
            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
