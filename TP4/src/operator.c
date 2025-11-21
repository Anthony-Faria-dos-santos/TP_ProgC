#include "operator.h"

// Fonction pour l'addition
int somme(int num1, int num2) {
    return num1 + num2;
}

// Fonction pour la soustraction
int difference(int num1, int num2) {
    return num1 - num2;
}

// Fonction pour la multiplication
int produit(int num1, int num2) {
    return num1 * num2;
}

// Fonction pour la division
int quotient(int num1, int num2) {
    return num1 / num2;
}

// Fonction pour le modulo
int modulo(int num1, int num2) {
    return num1 % num2;
}

// Fonction pour l'opération ET logique
int et_logique(int num1, int num2) {
    return num1 & num2;
}

// Fonction pour l'opération OU logique
int ou_logique(int num1, int num2) {
    return num1 | num2;
}

// Fonction pour la négation (opère sur num1 uniquement)
int negation(int num1, int num2) {
    (void)num2; // Paramètre non utilisé
    return ~num1;
}
