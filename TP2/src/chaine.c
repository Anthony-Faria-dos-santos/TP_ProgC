#include <stdio.h>

int main() {
    char str1[100] = "Hello";
    char str2[] = " World!";
    char str3[100]; // Pour la copie
    char str4[200]; // Pour la concatenation

    // 1. Calculer la longueur
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }
    printf("Longueur de '%s' : %d\n", str1, len1);

    // 2. Copier str1 dans str3
    int i = 0;
    while (str1[i] != '\0') {
        str3[i] = str1[i];
        i++;
    }
    str3[i] = '\0'; // Ne pas oublier le caractere nul
    printf("Copie de str1 : '%s'\n", str3);

    // 3. Concatenation de str1 et str2 dans str4
    // D'abord copier str1
    int j = 0;
    while (str1[j] != '\0') {
        str4[j] = str1[j];
        j++;
    }
    // Ensuite ajouter str2
    int k = 0;
    while (str2[k] != '\0') {
        str4[j] = str2[k];
        j++;
        k++;
    }
    str4[j] = '\0';
    printf("Concatenation : '%s'\n", str4);

    return 0;
}
