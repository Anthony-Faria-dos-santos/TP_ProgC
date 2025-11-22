/* Exercice 4.3 - Gestion d'une base de données étudiante
 * Réutilisation de la structure de TP2 et des fonctions de fichier (fichier.c)
 * Mode append : sauvegarde après chaque étudiant avec possibilité d'interruption
 */

#include <stdio.h>
#include <string.h>
#include "fichier.h"  /* Réutilisation des fonctions de TP4 Ex 4.2 */

/* Structure Etudiant (adaptée de TP2/etudiant2.c) */
struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note_c;   /* Note 1 */
    float note_os;  /* Note 2 */
};

int main() {
    struct Etudiant etudiant;
    char continuer;
    int compteur = 0;
    int nb_existants = 0;
    
    /* Compter le nombre d'étudiants déjà enregistrés */
    FILE* fichier_lecture = fopen("etudiant.txt", "r");
    if (fichier_lecture != NULL) {
        char ligne[512];
        while (fgets(ligne, sizeof(ligne), fichier_lecture) != NULL) {
            if (strncmp(ligne, "Etudiant ", 9) == 0) {
                nb_existants++;
            }
        }
        fclose(fichier_lecture);
    }
    
    printf("=== Exercice 4.3 - Gestion d'une base de données étudiante ===\n");
    printf("Les données seront sauvegardées après chaque étudiant.\n");
    printf("Vous pouvez interrompre à tout moment en choisissant 'n' ou Ctrl+C .\n");
    if (nb_existants > 0) {
        printf("📋 %d étudiant(s) déjà enregistré(s) dans le fichier.\n", nb_existants);
    }

    /* Si le fichier est plein (5 étudiants), proposer réinitialisation */
    if (nb_existants >= 5) {
        char choix_reset;
        printf("\nLe fichier contient déjà 5 étudiant(s).\n");
        printf("Souhaitez-vous le réinitialiser et recommencer à l'étudiant 1 ? (o/n) : ");
        scanf(" %c", &choix_reset);
        getchar(); /* consommer le '\n' */
        if (choix_reset == 'o' || choix_reset == 'O') {
            if (remove("etudiant.txt") == 0) {
                printf("Fichier etudiant.txt supprimé. Redémarrage à partir de l'étudiant 1.\n\n");
                nb_existants = 0; /* recommencer */
            } else {
                printf("Erreur : impossible de supprimer etudiant.txt. Abandon.\n");
                return 1;
            }
        } else {
            printf("Aucune action effectuée. Fin du programme.\n");
            printf("\n=== Résumé ===\nTotal : %d étudiant(s) enregistré(s) dans etudiant.txt\n", nb_existants);
            return 0;
        }
    }
    printf("\n");

    for (int i = 0; i < 5 - nb_existants; i++) {
        printf("Entrez les détails de l'étudiant.e %d :\n", nb_existants + i + 1);

        printf("Nom : ");
        fgets(etudiant.nom, sizeof(etudiant.nom), stdin);
        etudiant.nom[strcspn(etudiant.nom, "\n")] = 0;

        printf("Prénom : ");
        fgets(etudiant.prenom, sizeof(etudiant.prenom), stdin);
        etudiant.prenom[strcspn(etudiant.prenom, "\n")] = 0;

        printf("Adresse : ");
        fgets(etudiant.adresse, sizeof(etudiant.adresse), stdin);
        etudiant.adresse[strcspn(etudiant.adresse, "\n")] = 0;

        printf("Note 1 : ");
        scanf("%f", &etudiant.note_c);
        getchar(); /* Consommer le '\n' après la note */
        
        printf("Note 2 : ");
        scanf("%f", &etudiant.note_os);
        getchar(); /* Consommer le '\n' après la note */
        
        /* Sauvegarde immédiate en mode append */
        char ligne[512];
        snprintf(ligne, sizeof(ligne),
                 "Etudiant %d: %s %s, %s, Note1=%.1f, Note2=%.1f\n",
                 nb_existants + i + 1,
                 etudiant.prenom,
                 etudiant.nom,
                 etudiant.adresse,
                 etudiant.note_c,
                 etudiant.note_os);
        
        ajouter_dans_fichier("etudiant.txt", ligne);
        compteur++;
        printf("✓ Étudiant %d sauvegardé dans etudiant.txt\n\n", nb_existants + i + 1);
        
        /* Demander si l'utilisateur veut continuer */
        if (i < 4 - nb_existants) {
            printf("Voulez-vous ajouter un autre étudiant ? (o/n) : ");
            scanf(" %c", &continuer);
            getchar(); /* Consommer le '\n' après la réponse */
            if (continuer != 'o' && continuer != 'O') {
                printf("\nArrêt de la saisie. %d étudiant(s) sauvegardé(s).\n", compteur);
                break;
            }
            printf("\n");
        }
    }
    
    printf("\n=== Résumé ===");
    printf("\nTotal : %d étudiant(s) enregistré(s) dans etudiant.txt\n", nb_existants + compteur);
    return 0;
}
