#ifndef LISTE_H
#define LISTE_H

// Structure pour représenter une couleur RGBA
struct couleur {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char alpha;
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

// Fonction pour initialiser une liste vide
void init_liste(struct liste_couleurs* liste);

// Fonction pour insérer une couleur au début de la liste
void insertion(struct couleur* c, struct liste_couleurs* liste);

// Fonction pour parcourir et afficher toutes les couleurs de la liste
void parcours(struct liste_couleurs* liste);

// Fonction pour libérer toute la liste et la mémoire associée
void liberer_liste(struct liste_couleurs* liste);


#endif
