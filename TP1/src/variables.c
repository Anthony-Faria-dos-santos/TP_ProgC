#include <stdio.h>

int main() {
    // Types de caractères
    char c = 'A';
    unsigned char uc = 255;
    signed char sc = -128;

    // Types entiers courts
    short s = -32768;
    unsigned short us = 65535;

    // Types entiers
    int i = -2147483648;
    unsigned int ui = 4294967295U;

    // Types entiers longs
    long l = -2147483648L;
    unsigned long ul = 4294967295UL;

    // Types entiers très longs
    long long ll = -9223372036854775807LL - 1;
    unsigned long long ull = 18446744073709551615ULL;

    // Types à virgule flottante
    float f = 3.14159f;
    double d = 3.141592653589793;
    long double ld = 3.14159265358979323846L;

    // Affichage des valeurs
    printf("--- Types de caractères ---\n");
    printf("char: %c\n", c);
    printf("unsigned char: %u\n", uc);
    printf("signed char: %d\n", sc);

    printf("\n--- Types entiers courts ---\n");
    printf("short: %d\n", s);
    printf("unsigned short: %u\n", us);

    printf("\n--- Types entiers ---\n");
    printf("int: %d\n", i);
    printf("unsigned int: %u\n", ui);

    printf("\n--- Types entiers longs ---\n");
    printf("long: %ld\n", l);
    printf("unsigned long: %lu\n", ul);

    printf("\n--- Types entiers très longs ---\n");
    printf("long long: %lld\n", ll);
    printf("unsigned long long: %llu\n", ull);

    printf("\n--- Types à virgule flottante ---\n");
    printf("float: %f\n", f);
    printf("double: %lf\n", d);
    printf("long double: %Lf\n", ld);

    return 0;
}
