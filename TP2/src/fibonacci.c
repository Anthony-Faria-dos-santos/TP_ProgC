#include <stdio.h>

int main() {
    int n = 7; // Nombre de termes a afficher
    int u0 = 0;
    int u1 = 1;
    int un;

    printf("Suite de Fibonacci pour n=%d :\n", n);
    
    // Affichage des premiers termes si n >= 0 et n >= 1
    if (n >= 0) printf("%d", u0);
    if (n >= 1) printf(", %d", u1);

    for (int i = 2; i < n; i++) {
        un = u1 + u0;
        printf(", %d", un);
        u0 = u1;
        u1 = un;
    }
    printf("\n");

    return 0;
}
