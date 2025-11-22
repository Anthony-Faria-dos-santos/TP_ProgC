#include <stdio.h>
#include <math.h>

/* Certains environnements stricts C99 ne définissent pas M_PI.
    On le fournit si absent. */
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    double rayon = 6.0;
    double aire = M_PI * rayon * rayon;
    double perimetre = 2 * M_PI * rayon;

    printf("L'aire du cercle = %f\n", aire);
    printf("Le périmètre du cercle = %f\n", perimetre);

    return 0;
}
