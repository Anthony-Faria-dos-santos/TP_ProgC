#ifndef LISTE_H
#define LISTE_H

/* liste.h
 * Gestion d'une liste simplement chaînée de couleurs RGB (Exercice 4.7)
 * Passage en RGB strict (suppression du canal alpha) conformément à l'énoncé.
 */

// Structure pour représenter une couleur RGB
struct couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
};

// Structure pour un noeud de la liste chaînée
struct noeud_couleur {
    struct couleur couleur;
    struct noeud_couleur* suivant;
};

// Structure pour la liste de couleurs
struct liste_couleurs {
    struct noeud_couleur* tete;
};

// Fonction utilitaire pour créer une couleur RGB
struct couleur creer_couleur(unsigned char r, unsigned char g, unsigned char b);

// Initialiser une liste vide
void init_liste(struct liste_couleurs* liste);

// Insérer une couleur au début de la liste
void insertion(struct couleur* c, struct liste_couleurs* liste);

// Parcourir et afficher toutes les couleurs de la liste
void parcours(struct liste_couleurs* liste);

// Libérer toute la liste et la mémoire associée
void liberer_liste(struct liste_couleurs* liste);


#endif
