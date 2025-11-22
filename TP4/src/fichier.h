#ifndef FICHIER_H
#define FICHIER_H

// Fonction pour lire et afficher le contenu d'un fichier
void lire_fichier(const char* nom_de_fichier);

// Fonction pour écrire un message dans un fichier (écrase le contenu)
void ecrire_dans_fichier(const char* nom_de_fichier, const char* message);

// Fonction pour ajouter un message à la fin d'un fichier (mode append)
void ajouter_dans_fichier(const char* nom_de_fichier, const char* message);

#endif
