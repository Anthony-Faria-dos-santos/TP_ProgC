#include <stdio.h>

// Définition de la fonction factorielle récursive
int factorielle(int num) {
    if (num == 0) {
        printf("fact(0): 1\n");
        return 1;
    } else {
        int valeur = num * factorielle(num - 1);
        printf("fact(%d): %d\n", num, valeur);
        return valeur;
    }
}

int main() {
    int n;
    
    printf("=== Exercice 4.5 - Calcul de la factorielle ===\n\n");
    
    // Tester la fonction factorielle avec différentes valeurs
    printf("Test avec n = 0:\n");
    printf("Résultat final: %d\n\n", factorielle(0));
    
    printf("Test avec n = 1:\n");
    printf("Résultat final: %d\n\n", factorielle(1));
    
    printf("Test avec n = 5:\n");
    printf("Résultat final: %d\n\n", factorielle(5));
    
    printf("Test avec n = 10:\n");
    printf("Résultat final: %d\n\n", factorielle(10));
    
    // Permettre à l'utilisateur de tester avec sa propre valeur
    printf("Entrez un nombre pour calculer sa factorielle : ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Erreur : La factorielle n'est pas définie pour les nombres négatifs\n");
        return 1;
    }
    
    printf("\nCalcul de la factorielle de %d:\n", n);
    printf("Résultat final: %d\n", factorielle(n));
    
    return 0;
}
