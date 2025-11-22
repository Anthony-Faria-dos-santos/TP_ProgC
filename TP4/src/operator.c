/* Module operator.c
 * Implémente les fonctions de calcul de l'exercice 4.1 ainsi
 * qu'une fonction centrale calcul() utilisant un switch sur l'opérateur.
 * Pas de fonction main ici : le programme principal est dans main.c.
 */

#include "operator.h"
#include <stdio.h>

int somme(int num1, int num2) { return num1 + num2; }
int difference(int num1, int num2) { return num1 - num2; }
int produit(int num1, int num2) { return num1 * num2; }
int quotient(int num1, int num2) { return num1 / num2; }
int modulo(int num1, int num2) { return num1 % num2; }
int et_logique(int num1, int num2) { return num1 & num2; }
int ou_logique(int num1, int num2) { return num1 | num2; }
int negation(int num1, int num2) { (void)num2; return ~num1; }

int calcul(int num1, int num2, char op) {
    switch (op) {
    case '+': return somme(num1, num2);
    case '-': return difference(num1, num2);
    case '*': return produit(num1, num2);
    case '/':
        if (num2 == 0) { printf("Erreur : Division par zéro\n"); return 0; }
        return quotient(num1, num2);
    case '%':
        if (num2 == 0) { printf("Erreur : Modulo par zéro\n"); return 0; }
        return modulo(num1, num2);
    case '&': return et_logique(num1, num2);
    case '|': return ou_logique(num1, num2);
    case '~': return negation(num1, num2);
    default:
        printf("Opérateur non reconnu: %c\n", op);
        printf("Opérateurs supportés: + - * / %% & | ~\n");
        return 0;
    }
}
