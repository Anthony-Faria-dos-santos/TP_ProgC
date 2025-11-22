############################################################
# Makefile optimisé pour TP4
# Objectifs : compiler chaque exercice avec ses dépendances
# selon l'énoncé.
############################################################

CC       = gcc
CFLAGS   = -Wall -Wextra
SRC_DIR  = ./src

# Exécutables définis dans l'énoncé
EXECUTABLES = main etudiant_bd calcule factorielle chercherfichier

############################################################
# Règle par défaut
############################################################
all: $(EXECUTABLES)

############################################################
# main (exercices 4.1, 4.2, 4.7)
# Dépend de operator.c (opérations), fichier.c (I/O), liste.c (liste couleurs)
############################################################

main: $(SRC_DIR)/main.c $(SRC_DIR)/operator.c $(SRC_DIR)/fichier.c $(SRC_DIR)/liste.c
	$(CC) $(CFLAGS) -o $@ $^
# $@ correspond à ce qui se situe à gauche de :
# $^ correspond à ce qui se situe à droite de :
#
# Exemple : $@ = main  :   $^ = $(SRC_DIR)/main.c $(SRC_DIR)/operator.c $(SRC_DIR)/fichier.c $(SRC_DIR)/liste.c
#   
############################################################
# etudiant_bd (exercice 4.3)

# L'énoncé indique réutilisation de fichier.c, mais le code actuel
# n'inclut pas fichier.h – pas de dépendance directe.
# Si vous ajoutez les fonctions de fichier, décommentez la ligne alternative.
############################################################
etudiant_bd: $(SRC_DIR)/etudiant_bd.c $(SRC_DIR)/fichier.c
	$(CC) $(CFLAGS) -o $@ $^

############################################################
# calcule (exercice 4.4) dépend des opérations (operator.c)
############################################################
calcule: $(SRC_DIR)/calcule.c $(SRC_DIR)/operator.c
	$(CC) $(CFLAGS) -o $@ $^

############################################################
# factorielle (exercice 4.5) fichier autonome
############################################################
factorielle: $(SRC_DIR)/factorielle.c
	$(CC) $(CFLAGS) -o $@ $^

############################################################
# chercherfichier (exercice 4.6) fichier autonome
############################################################
chercherfichier: $(SRC_DIR)/chercherfichier.c
	$(CC) $(CFLAGS) -o $@ $^

############################################################
# Nettoyage
############################################################
clean:
	rm -f $(EXECUTABLES)

cleanall: clean
	rm -f etudiant.txt *.txt

############################################################
# Aide
############################################################
help:
	@echo "Makefile pour TP4"
	@echo "Cibles:"
	@echo "  all             Compile tous les programmes"
	@echo "  main            Ex 4.1, 4.2, 4.7 (operator, fichier, liste)"
	@echo "  etudiant_bd     Ex 4.3 (autonome actuellement)"
	@echo "  calcule         Ex 4.4 (operator)"
	@echo "  factorielle     Ex 4.5"
	@echo "  chercherfichier Ex 4.6"
	@echo "  clean           Supprime exécutables"
	@echo "  cleanall        Supprime exécutables + fichiers générés"
	@echo "  help            Affiche cette aide"

.PHONY: all clean cleanall help
