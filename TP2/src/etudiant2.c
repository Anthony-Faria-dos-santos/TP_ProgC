#include <stdio.h>
#include <string.h>

struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note_c;
    float note_os;
};

int main() {
    struct Etudiant etudiants[5];

    // Initialisation
    strcpy(etudiants[0].nom, "Dupont"); strcpy(etudiants[0].prenom, "Marie"); strcpy(etudiants[0].adresse, "20, Boulevard Niels Bohr, Lyon"); etudiants[0].note_c = 16.5; etudiants[0].note_os = 12.1;
    strcpy(etudiants[1].nom, "Martin"); strcpy(etudiants[1].prenom, "Pierre"); strcpy(etudiants[1].adresse, "22, Boulevard Niels Bohr, Lyon"); etudiants[1].note_c = 14.0; etudiants[1].note_os = 14.1;
    strcpy(etudiants[2].nom, "Durand"); strcpy(etudiants[2].prenom, "Sophie"); strcpy(etudiants[2].adresse, "10, Rue de la Paix, Paris"); etudiants[2].note_c = 18.0; etudiants[2].note_os = 19.5;
    strcpy(etudiants[3].nom, "Lefevre"); strcpy(etudiants[3].prenom, "Thomas"); strcpy(etudiants[3].adresse, "5, Avenue des Champs, Lille"); etudiants[3].note_c = 12.5; etudiants[3].note_os = 11.0;
    strcpy(etudiants[4].nom, "Moreau"); strcpy(etudiants[4].prenom, "Julie"); strcpy(etudiants[4].adresse, "15, Place Bellecour, Lyon"); etudiants[4].note_c = 15.0; etudiants[4].note_os = 16.0;

    // Affichage
    for (int i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i + 1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prenom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note 1 : %.1f\n", etudiants[i].note_c);
        printf("Note 2 : %.1f\n", etudiants[i].note_os);
        printf("\n");
    }

    return 0;
}
