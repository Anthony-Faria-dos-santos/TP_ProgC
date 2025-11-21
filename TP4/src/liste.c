#include "liste.h"
#include <stdio.h>
#include <stdlib.h>

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
    int compteur = 1;
    
    if (courant == NULL) {
        printf("La liste est vide.\n");
        return;
    }
    
    while (courant != NULL) {
        printf("Couleur %d : R=0x%02X, G=0x%02X, B=0x%02X, Alpha=0x%02X\n",
               compteur,
               courant->couleur.r,
               courant->couleur.g,
               courant->couleur.b,
               courant->couleur.alpha);
        courant = courant->suivant;
        compteur++;
    }
}
