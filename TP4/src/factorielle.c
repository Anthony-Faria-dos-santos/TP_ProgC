#include <stdio.h>
#include <limits.h>

/* Nouvelle implémentation sûre de la factorielle utilisant unsigned long long.
 *  - 20! tient dans unsigned long long (2^64-1 ≈ 1.84e19)
 *  - 21! déborde. On impose donc une limite à 20.
 *  - Détection de débordement pré-multiplication (valeur > ULLONG_MAX / num)
 *  - Affichage étape par étape conservé.
 */

unsigned long long factorielle_safe(int num) {
    if (num < 0) {
        printf("Erreur : factorielle non définie pour les nombres négatifs\n");
        return 0ULL;
    }
    if (num == 0) {
        printf("fact(0): 1\n");
        return 1ULL;
    }
    unsigned long long prev = factorielle_safe(num - 1);
    if (prev == 0ULL) return 0ULL; /* Propagation erreur */
    if (prev > ULLONG_MAX / (unsigned long long)num) {
        printf("Débordement détecté avant calcul de %d!\n", num);
        return 0ULL;
    }
    unsigned long long valeur = (unsigned long long)num * prev;
    printf("fact(%d): %llu\n", num, valeur);
    return valeur;
}

int main() {
    int n;
    printf("=== Exercice 4.5 - Calcul de la factorielle (version sûre) ===\n\n");

    int tests[] = {0, 1, 5, 10};
    for (size_t i = 0; i < sizeof(tests) / sizeof(tests[0]); ++i) {
        int t = tests[i];
        printf("Test avec n = %d:\n", t);
        unsigned long long r = factorielle_safe(t);
        printf("Résultat final: %llu\n\n", r);
    }

    printf("Entrez un nombre (0..20) pour calculer sa factorielle : ");
    if (scanf("%d", &n) != 1) {
        printf("Entrée invalide\n");
        return 1;
    }
    if (n < 0) {
        printf("Erreur : La factorielle n'est pas définie pour les nombres négatifs\n");
        return 1;
    }
    if (n > 20) {
        printf("Limite atteinte : 21! déborde unsigned long long. Choisissez <= 20.\n");
        return 1;
    }
    printf("\nCalcul de la factorielle de %d:\n", n);
    unsigned long long r = factorielle_safe(n);
    if (r == 0ULL && n != 0) {
        printf("Débordement ou erreur lors du calcul.\n");
        return 1;
    }
    printf("Résultat final: %llu\n", r);
    return 0;
}
