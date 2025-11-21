#include <stdio.h>
#include <string.h>

// Structure Etudiant (réutilisée de TP2)
struct Etudiant {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note1;
    float note2;
};

int main() {
    struct Etudiant etudiants[5];
    
    printf("=== Exercice 4.3 - Gestion d'une base de données étudiante ===\n\n");
    
    // Saisie des informations pour 5 étudiants
    for (int i = 0; i < 5; i++) {
        printf("Entrez les détails de l'étudiant.e %d :\n", i + 1);
        
        printf("Nom : ");
        scanf("%s", etudiants[i].nom);
        
        printf("Prénom : ");
        scanf("%s", etudiants[i].prenom);
        
        printf("Adresse : ");
        getchar(); // Consommer le '\n' restant
        fgets(etudiants[i].adresse, sizeof(etudiants[i].adresse), stdin);
        etudiants[i].adresse[strcspn(etudiants[i].adresse, "\n")] = 0; // Enlever le '\n'
        
        printf("Note 1 : ");
        scanf("%f", &etudiants[i].note1);
        
        printf("Note 2 : ");
        scanf("%f", &etudiants[i].note2);
        
        printf("\n");
    }
    
    // Ouvrir le fichier en mode écriture
    FILE* fichier = fopen("etudiant.txt", "w");
    if (fichier == NULL) {
        printf("Erreur : Impossible de créer le fichier etudiant.txt\n");
        return 1;
    }
    
    // Écrire les informations de chaque étudiant dans le fichier
    for (int i = 0; i < 5; i++) {
        fprintf(fichier, "Etudiant %d: %s %s, %s, Note1=%.1f, Note2=%.1f\n",
                i + 1,
                etudiants[i].prenom,
                etudiants[i].nom,
                etudiants[i].adresse,
                etudiants[i].note1,
                etudiants[i].note2);
    }
    
    fclose(fichier);
    
    printf("Les détails des étudiants ont été enregistrés dans le fichier etudiant.txt.\n");
    
    return 0;
}
