#include <stdio.h>

void afficher_binaire(int n) {
    // On parcourt les 32 bits de l'entier (sizeof(int) * 8 est généralement 32)
    // On commence par le bit de poids fort (31) jusqu'au bit de poids faible (0)
    for (int i = 31; i >= 0; i--) {
        // On décale n de i positions vers la droite
        // On fait un ET bit à bit avec 1 pour récupérer le dernier bit
        int bit = (n >> i) & 1;
        printf("%d", bit);
        
        // Pour la lisibilité, on peut ajouter un espace tous les 4 bits (optionnel mais sympa)
        if (i % 4 == 0 && i != 0) {
            printf(" ");
        }
    }
}

int main() {
    int nombres_a_tester[] = {0, 4096, 65536, 65535, 1024};
    int nombre_de_tests = sizeof(nombres_a_tester) / sizeof(nombres_a_tester[0]);

    for (int i = 0; i < nombre_de_tests; i++) {
        int n = nombres_a_tester[i];
        printf("Decimal: %d\n", n);
        printf("Binaire: ");
        afficher_binaire(n);
        printf("\n----------------------------------------\n");
    }

    return 0;
}
