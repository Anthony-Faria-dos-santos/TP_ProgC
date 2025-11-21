#include "fichier.h"
#include <stdio.h>
#include <stdlib.h>

// Fonction pour lire et afficher le contenu d'un fichier
void lire_fichier(const char* nom_de_fichier) {
    FILE* fichier = fopen(nom_de_fichier, "r");
    
    if (fichier == NULL) {
        printf("Erreur : Impossible d'ouvrir le fichier '%s'\n", nom_de_fichier);
        return;
    }
    
    printf("Contenu du fichier %s :\n", nom_de_fichier);
    
    char ligne[1024];
    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        printf("%s", ligne);
    }
    
    fclose(fichier);
}

// Fonction pour écrire un message dans un fichier
void ecrire_dans_fichier(const char* nom_de_fichier, const char* message) {
    FILE* fichier = fopen(nom_de_fichier, "w");
    
    if (fichier == NULL) {
        printf("Erreur : Impossible d'ouvrir le fichier '%s' en écriture\n", nom_de_fichier);
        return;
    }
    
    fprintf(fichier, "%s", message);
    fclose(fichier);
    
    printf("Le message a été écrit dans le fichier %s.\n", nom_de_fichier);
}
