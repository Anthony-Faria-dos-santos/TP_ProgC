#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operator.h"

int main(int argc, char* argv[]) {
    // Vérifier le nombre d'arguments
    if (argc != 4) {
        printf("Usage: %s <opérateur> <num1> <num2>\n", argv[0]);
        printf("Opérateurs supportés: +, -, *, /, %%, &, |, ~\n");
        printf("Exemple: %s + 15 8\n", argv[0]);
        return 1;
    }
    
    // Extraire l'opérateur et les nombres
    char op = argv[1][0];
    int num1 = atoi(argv[2]);
    int num2 = atoi(argv[3]);
    int resultat;
    
    // Effectuer l'opération selon l'opérateur
    switch(op) {
        case '+':
            resultat = somme(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        case '-':
            resultat = difference(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        case '*':
            resultat = produit(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        case '/':
            if (num2 == 0) {
                printf("Erreur : Division par zéro\n");
                return 1;
            }
            resultat = quotient(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        case '%':
            if (num2 == 0) {
                printf("Erreur : Modulo par zéro\n");
                return 1;
            }
            resultat = modulo(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        case '&':
            resultat = et_logique(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        case '|':
            resultat = ou_logique(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        case '~':
            resultat = negation(num1, num2);
            printf("Résultat : %d\n", resultat);
            break;
        default:
            printf("Opérateur non reconnu: %c\n", op);
            printf("Opérateurs supportés: +, -, *, /, %%, &, |, ~\n");
            return 1;
    }
    
    return 0;
}
