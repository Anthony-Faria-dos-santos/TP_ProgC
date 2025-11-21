#include <stdio.h>

int main() {
    // Affichage des tailles des types caractères
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("Size of signed char: %zu bytes\n", sizeof(signed char));
    printf("Size of unsigned char: %zu bytes\n", sizeof(unsigned char));

    // Affichage des tailles des types entiers courts
    printf("Size of short: %zu bytes\n", sizeof(short));
    printf("Size of signed short: %zu bytes\n", sizeof(signed short));
    printf("Size of unsigned short: %zu bytes\n", sizeof(unsigned short));

    // Affichage des tailles des types entiers standards
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of signed int: %zu bytes\n", sizeof(signed int));
    printf("Size of unsigned int: %zu bytes\n", sizeof(unsigned int));

    // Affichage des tailles des types entiers longs
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of signed long int: %zu bytes\n", sizeof(signed long int));
    printf("Size of unsigned long int: %zu bytes\n", sizeof(unsigned long int));

    // Affichage des tailles des types entiers très longs
    printf("Size of long long int: %zu bytes\n", sizeof(long long int));
    printf("Size of signed long long int: %zu bytes\n", sizeof(signed long long int));
    printf("Size of unsigned long long int: %zu bytes\n", sizeof(unsigned long long int));

    // Affichage des tailles des types flottants
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    return 0;
}
