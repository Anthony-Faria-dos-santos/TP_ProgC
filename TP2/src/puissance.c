#include <stdio.h>

int main() {
    int a = 2;
    int b = 3;
    int resultat = 1;

    // Calcul de la puissance
    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    printf("%d a la puissance %d est egal a %d\n", a, b, resultat);

    return 0;
}
