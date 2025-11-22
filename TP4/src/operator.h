#ifndef OPERATOR_H
#define OPERATOR_H

// Fonction pour l'addition
int somme(int num1, int num2);

// Fonction pour la soustraction
int difference(int num1, int num2);

// Fonction pour la multiplication
int produit(int num1, int num2);

// Fonction pour la division
int quotient(int num1, int num2);

// Fonction pour le modulo
int modulo(int num1, int num2);

// Fonction pour l'opération ET logique
int et_logique(int num1, int num2);

// Fonction pour l'opération OU logique
int ou_logique(int num1, int num2);

// Fonction pour la négation (opère sur num1 uniquement)
int negation(int num1, int num2);

// Fonction dispatch qui applique l'opérateur indiqué par 'op'
// Retourne 0 et écrit un message d'erreur sur division/modulo par zéro.
int calcul(int num1, int num2, char op);

#endif
