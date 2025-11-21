#include <stdio.h>
#include <stdlib.h>
#include "liste.h"

// Fonction pour initialiser une liste vide
void init_liste(struct liste_couleurs* liste) {
    liste->tete = NULL;
}

// Fonction pour insérer une couleur au début de la liste
void insertion(struct couleur* c, struct liste_couleurs* liste) {
    // Allouer de la mémoire pour un nouveau noeud
    struct noeud_couleur* nouveau = (struct noeud_couleur*)malloc(sizeof(struct noeud_couleur));
    
    if (nouveau == NULL) {
        printf("Erreur : Allocation mémoire échouée\n");
        return;
    }
    
    // Copier la couleur dans le nouveau noeud
    nouveau->couleur = *c;
    
    // Insérer au début de la liste
    nouveau->suivant = liste->tete;
    liste->tete = nouveau;
}

// Fonction pour parcourir et afficher toutes les couleurs de la liste
void parcours(struct liste_couleurs* liste) {
    struct noeud_couleur* courant = liste->tete;
    int index = 1;
    
    if (courant == NULL) {
        printf("La liste est vide\n");
        return;
    }
    
    while (courant) {
        printf("Couleur %d: R=%u, G=%u, B=%u, A=%u\n",
               index,
               courant->couleur.r,
               courant->couleur.g,
               courant->couleur.b,
               courant->couleur.alpha);
        courant = courant->suivant;
        index++;
    }
}

// Fonction pour libérer toute la liste et la mémoire associée
void liberer_liste(struct liste_couleurs* liste) {
    struct noeud_couleur* courant = liste->tete;
    while (courant) {
        struct noeud_couleur* tmp = courant;
        courant = courant->suivant;
        free(tmp);
    }
    liste->tete = NULL;
}
