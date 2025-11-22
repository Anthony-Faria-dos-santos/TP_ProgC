#include "fichier.h"
#include "liste.h"
#include "operator.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Fonction d'entrée pour l'exercice 4.1 - Calcul avec opérateurs
void exercice_4_1() {
  int num1, num2;
  char op;
  int resultat;

  printf("\n=== Exercice 4.1 - Calcul avec opérateurs ===\n");
  printf("Entrez num1 : ");
  scanf("%d", &num1);
  getchar(); // Consommer le '\n'
  printf("Entrez num2 : ");
  scanf("%d", &num2);
  getchar(); // Consommer le '\n'
  printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
  scanf("%c", &op);

  resultat = calcul(num1, num2, op);
  if (op == '/' && num2 == 0) return; /* Erreur déjà affichée */
  if (op == '%' && num2 == 0) return; /* Erreur déjà affichée */
  if (strchr("+-*/%&|~", op) != NULL && !(op == '/' && num2 == 0) && !(op == '%' && num2 == 0)) {
    printf("Résultat : %d\n", resultat);
  }
}

// Fonction d'entrée pour l'exercice 4.2 - Gestion de fichiers
void exercice_4_2() {
  int choix;
  char nom_fichier[256];
  char message[1024];

  printf("\n=== Exercice 4.2 - Gestion de fichiers ===\n");

  while (1) {
    printf("\nQue souhaitez-vous faire ?\n");
    printf("1. Lire un fichier\n");
    printf("2. Écrire dans un fichier\n");
    printf("3. Retour au menu principal\n");
    printf("Votre choix : ");
    scanf("%d", &choix);
    getchar(); // Consommer le '\n'

    if (choix == 3) {
      break;
    }

    switch (choix) {
    case 1:
      printf("\nEntrez le nom du fichier à lire : ");
      fgets(nom_fichier, sizeof(nom_fichier), stdin);
      // Enlever le '\n' à la fin
      nom_fichier[strcspn(nom_fichier, "\n")] = 0;
      if (nom_fichier[0] == '\0') {
        printf("Nom de fichier vide – opération annulée.\n");
        break;
      }
      lire_fichier(nom_fichier);
      break;
    case 2:
      printf("\nEntrez le nom du fichier dans lequel vous souhaitez écrire : ");
      fgets(nom_fichier, sizeof(nom_fichier), stdin);
      nom_fichier[strcspn(nom_fichier, "\n")] = 0;

      printf("Entrez le message à écrire : ");
      fgets(message, sizeof(message), stdin);
      message[strcspn(message, "\n")] = 0;

      ecrire_dans_fichier(nom_fichier, message);
      break;
    default:
      printf("Choix invalide\n");
    }
  }
}

// Fonction d'entrée pour l'exercice 4.7 - Gestion d'une liste de couleurs
void exercice_4_7() {
  printf("\n=== Exercice 4.7 - Gestion d'une liste de couleurs ===\n");

  struct liste_couleurs ma_liste;
  init_liste(&ma_liste);

  // Affichage d'une liste vide pour démonstration
  printf("Liste initiale (devrait être vide) :\n");
  parcours(&ma_liste);

  // Créer 10 couleurs différentes (RGB strict)
  struct couleur couleurs[10] = {
      creer_couleur(0xFF, 0x00, 0x00), // Rouge
      creer_couleur(0x00, 0xFF, 0x00), // Vert
      creer_couleur(0x00, 0x00, 0xFF), // Bleu
      creer_couleur(0xFF, 0xFF, 0x00), // Jaune
      creer_couleur(0xFF, 0x00, 0xFF), // Magenta
      creer_couleur(0x00, 0xFF, 0xFF), // Cyan
      creer_couleur(0xFF, 0x80, 0x00), // Orange
      creer_couleur(0x80, 0x00, 0x80), // Violet
      creer_couleur(0xFF, 0xFF, 0xFF), // Blanc
      creer_couleur(0x00, 0x00, 0x00)  // Noir
  };

  // Insérer toutes les couleurs dans la liste
  for (int i = 0; i < 10; i++) {
    insertion(&couleurs[i], &ma_liste);
  }

  printf("\nListe des couleurs après insertion :\n");
  parcours(&ma_liste);
  
  // Libérer la mémoire allouée
  liberer_liste(&ma_liste);
}

int main() {
  int choix;

  printf("=================================================\n");
  printf("   TP4 - Fonctions, Fichiers et Listes\n");
  printf("=================================================\n");

  while (1) {
    printf("\n--- Menu Principal ---\n");
    printf("1. Exercice 4.1 - Calcul avec opérateurs\n");
    printf("2. Exercice 4.2 - Gestion de fichiers\n");
    printf("3. Exercice 4.7 - Gestion d'une liste de couleurs\n");
    printf("0. Quitter\n");
    printf("Votre choix : ");
    scanf("%d", &choix);
    getchar(); // Consommer le '\n'

    switch (choix) {
    case 1:
      exercice_4_1();
      break;
    case 2:
      exercice_4_2();
      break;
    case 3:
      exercice_4_7();
      break;
    case 0:
      printf("\nAu revoir !\n");
      return 0;
    default:
      printf("Choix invalide. Veuillez réessayer.\n");
    }
  }

  return 0;
}
