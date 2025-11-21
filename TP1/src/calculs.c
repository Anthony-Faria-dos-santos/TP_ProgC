#include <stdio.h>

int main() {
    // Déclaration des variables
    int num1, num2;
    char op;

    // Demande à l'utilisateur de saisir l'opérateur et les deux nombres
    printf("Entrez un opérateur (+, -, *, /, %%, &, |, ~) et deux nombres (ex: + 10 5) :\n");
    
    // Lecture de l'opérateur et des nombres
    // Note : On lit toujours 3 valeurs pour simplifier, même si le deuxième nombre n'est pas utilisé pour ~
    if (scanf(" %c %d %d", &op, &num1, &num2) != 3 && op != '~') {
        // Si l'utilisateur n'entre pas le bon format (sauf pour ~ qui est unaire)
        // On pourrait gérer l'erreur ici, mais pour cet exercice on suppose une entrée valide ou on continue.
        // Pour ~ on a besoin que de num1, donc si scanf retourne 2 c'est acceptable pour ~.
    }

    // Utilisation de switch pour déterminer l'opération à effectuer
    switch(op) {
        case '+': // Addition
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-': // Soustraction
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*': // Multiplication
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/': // Division
            if (num2 != 0)
                printf("%d / %d = %d\n", num1, num2, num1 / num2);
            else
                printf("Erreur : Division par zéro impossible\n");
            break;
        case '%': // Modulo (reste de la division)
            if (num2 != 0)
                printf("%d %% %d = %d\n", num1, num2, num1 % num2);
            else
                printf("Erreur : Division par zéro impossible\n");
            break;
        case '&': // ET binaire (AND)
            printf("%d & %d = %d\n", num1, num2, num1 & num2);
            break;
        case '|': // OU binaire (OR)
            printf("%d | %d = %d\n", num1, num2, num1 | num2);
            break;
        case '~': // NON binaire (NOT) - Opération unaire
            printf("~%d = %d\n", num1, ~num1);
            break;
        default: // Opérateur non reconnu
            printf("Erreur : Opérateur inconnu '%c'\n", op);
    }

    return 0;
}
