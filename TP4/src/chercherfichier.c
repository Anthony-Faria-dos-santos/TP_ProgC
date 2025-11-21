#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonction pour compter le nombre d'occurrences d'une phrase dans une ligne
int compter_occurrences(const char* ligne, const char* phrase) {
    int count = 0;
    const char* temp = ligne;
    size_t phrase_len = strlen(phrase);
    
    while ((temp = strstr(temp, phrase)) != NULL) {
        count++;
        temp += phrase_len;
    }
    
    return count;
}

int main(int argc, char* argv[]) {
    // Vérifier les arguments
    if (argc != 2) {
        printf("Usage: %s <nom_du_fichier>\n", argv[0]);
        return 1;
    }
    
    char* nom_fichier = argv[1];
    char phrase[256];
    char ligne[1024];
    int numero_ligne = 0;
    int total_occurrences = 0;
    
    // Demander la phrase à rechercher
    printf("Entrez la phrase que vous souhaitez rechercher : ");
    fgets(phrase, sizeof(phrase), stdin);
    phrase[strcspn(phrase, "\n")] = 0; // Enlever le '\n'
    
    // Ouvrir le fichier
    FILE* fichier = fopen(nom_fichier, "r");
    if (fichier == NULL) {
        printf("Erreur : Impossible d'ouvrir le fichier '%s'\n", nom_fichier);
        return 1;
    }
    
    printf("\nRésultats de la recherche :\n");
    
    // Parcourir chaque ligne du fichier
    while (fgets(ligne, sizeof(ligne), fichier) != NULL) {
        numero_ligne++;
        int occurrences = compter_occurrences(ligne, phrase);
        
        if (occurrences > 0) {
            printf("Ligne %d, %d fois\n", numero_ligne, occurrences);
            total_occurrences += occurrences;
        }
    }
    
    fclose(fichier);
    
    if (total_occurrences == 0) {
        printf("Aucune occurrence trouvée.\n");
    } else {
        printf("\nTotal : %d occurrence(s) trouvée(s) dans le fichier.\n", total_occurrences);
    }
    
    return 0;
}
