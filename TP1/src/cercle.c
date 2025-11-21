#include <stdio.h>
#include <math.h>

int main() {
    double rayon = 6.0;
    double aire = M_PI * rayon * rayon;
    double perimetre = 2 * M_PI * rayon;

    printf("L'aire du cercle = %f\n", aire);
    printf("Le périmètre du cercle = %f\n", perimetre);

    return 0;
}
