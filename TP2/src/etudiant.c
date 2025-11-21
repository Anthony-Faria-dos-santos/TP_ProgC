#include <stdio.h>
#include <string.h>

int main() {
    // Tableaux pour 5 etudiants
    char noms[5][50];
    char prenoms[5][50];
    char adresses[5][100];
    float notes_c[5];
    float notes_os[5];

    // Initialisation des donnees
    strcpy(noms[0], "Dupont"); strcpy(prenoms[0], "Marie"); strcpy(adresses[0], "20, Boulevard Niels Bohr, Lyon"); notes_c[0] = 16.5; notes_os[0] = 12.1;
    strcpy(noms[1], "Martin"); strcpy(prenoms[1], "Pierre"); strcpy(adresses[1], "22, Boulevard Niels Bohr, Lyon"); notes_c[1] = 14.0; notes_os[1] = 14.1;
    strcpy(noms[2], "Durand"); strcpy(prenoms[2], "Sophie"); strcpy(adresses[2], "10, Rue de la Paix, Paris"); notes_c[2] = 18.0; notes_os[2] = 19.5;
    strcpy(noms[3], "Lefevre"); strcpy(prenoms[3], "Thomas"); strcpy(adresses[3], "5, Avenue des Champs, Lille"); notes_c[3] = 12.5; notes_os[3] = 11.0;
    strcpy(noms[4], "Moreau"); strcpy(prenoms[4], "Julie"); strcpy(adresses[4], "15, Place Bellecour, Lyon"); notes_c[4] = 15.0; notes_os[4] = 16.0;

    // Affichage
    for (int i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prenom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Prog C : %.1f\n", notes_c[i]);
        printf("Note OS : %.1f\n", notes_os[i]);
        printf("\n");
    }

    return 0;
}
