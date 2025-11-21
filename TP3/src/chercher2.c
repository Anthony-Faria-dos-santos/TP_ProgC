#include <stdio.h>

// Fonction pour comparer deux chaînes de caractères caractère par caractère
// Retourne 1 si les chaînes sont identiques, 0 sinon
int comparer_chaines(const char *s1, const char *s2) {
    int i = 0;
    
    // Parcourir les deux chaînes simultanément
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return 0; // Les caractères diffèrent
        }
        i++;
    }
    
    // Vérifier que les deux chaînes se terminent en même temps
    if (s1[i] == '\0' && s2[i] == '\0') {
        return 1; // Les chaînes sont identiques
    }
    
    return 0; // Les chaînes ont des longueurs différentes
}

int main() {
    // Tableau de 10 phrases
    const char *phrases[10] = {
        "Bonjour, comment ça va ?",
        "Le temps est magnifique aujourd'hui.",
        "C'est une belle journée.",
        "La programmation en C est amusante.",
        "Les tableaux en C sont puissants.",
        "Les pointeurs en C peuvent être déroutants.",
        "Il fait beau dehors.",
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };
    
    char phrase_cherchee[200];
    int trouve = 0;
    
    // Affichage des phrases disponibles
    printf("Phrases disponibles :\n");
    for (int i = 0; i < 10; i++) {
        printf("%d. %s\n", i + 1, phrases[i]);
    }
    printf("\n");
    
    // Demande à l'utilisateur d'entrer une phrase
    printf("Entrez la phrase que vous souhaitez chercher : ");
    
    // Lecture de la phrase (avec fgets pour gérer les espaces)
    if (fgets(phrase_cherchee, sizeof(phrase_cherchee), stdin) != NULL) {
        // Supprimer le caractère de nouvelle ligne ajouté par fgets
        int i = 0;
        while (phrase_cherchee[i] != '\0') {
            if (phrase_cherchee[i] == '\n') {
                phrase_cherchee[i] = '\0';
                break;
            }
            i++;
        }
        
        // Recherche de la phrase dans le tableau
        for (int i = 0; i < 10; i++) {
            if (comparer_chaines(phrases[i], phrase_cherchee)) {
                trouve = 1;
                break;
            }
        }
        
        // Affichage du résultat
        if (trouve) {
            printf("\nRésultat : Phrase trouvée\n");
        } else {
            printf("\nRésultat : Phrase non trouvée\n");
        }
    }
    
    return 0;
}
