#include <stdio.h>

int main() {
    int somme = 0;

    for (int i = 1; i <= 1000; i++) {
        // Si le nombre est divisible par 11, on passe au suivant
        if (i % 11 == 0) {
            continue;
        }

        // Si le nombre est divisible par 5 ou par 7
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Si la somme dépasse 5000, on arrête
        if (somme > 5000) {
            break;
        }
    }

    printf("La somme finale est : %d\n", somme);

    return 0;
}
