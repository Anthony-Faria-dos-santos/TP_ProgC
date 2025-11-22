############################################################
# Makefile optimisé pour TP4
# Objectifs : compiler chaque exercice avec ses dépendances
# selon l'énoncé.
############################################################

CC       = gcc
CFLAGS   = -Wall -Wextra -std=c99
SRC_DIR  = ./src

# Objets (factorise la recompilation des modules)
OBJ_MAIN = $(SRC_DIR)/main.o $(SRC_DIR)/operator.o $(SRC_DIR)/fichier.o $(SRC_DIR)/liste.o
OBJ_ETU  = $(SRC_DIR)/etudiant_bd.o $(SRC_DIR)/fichier.o
OBJ_CALC = $(SRC_DIR)/calcule.o $(SRC_DIR)/operator.o
OBJ_FACT = $(SRC_DIR)/factorielle.o
OBJ_CHER = $(SRC_DIR)/chercherfichier.o

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

main: $(OBJ_MAIN)
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
etudiant_bd: $(OBJ_ETU)
	$(CC) $(CFLAGS) -o $@ $^

############################################################
# calcule (exercice 4.4) dépend des opérations (operator.c)
############################################################
calcule: $(OBJ_CALC)
	$(CC) $(CFLAGS) -o $@ $^

############################################################
# factorielle (exercice 4.5) fichier autonome
############################################################
factorielle: $(OBJ_FACT)
	$(CC) $(CFLAGS) -o $@ $^

############################################################
# chercherfichier (exercice 4.6) fichier autonome
############################################################
chercherfichier: $(OBJ_CHER)
	$(CC) $(CFLAGS) -o $@ $^

############################################################
# Règle générique de compilation des .c en .o
############################################################
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

############################################################
# Dépendances explicites des headers (facultatif mais clair)
############################################################
$(SRC_DIR)/operator.o: $(SRC_DIR)/operator.h
$(SRC_DIR)/fichier.o:  $(SRC_DIR)/fichier.h
$(SRC_DIR)/liste.o:    $(SRC_DIR)/liste.h
$(SRC_DIR)/main.o:     $(SRC_DIR)/operator.h $(SRC_DIR)/fichier.h $(SRC_DIR)/liste.h
$(SRC_DIR)/calcule.o:  $(SRC_DIR)/operator.h
$(SRC_DIR)/etudiant_bd.o: $(SRC_DIR)/fichier.h

############################################################
# Nettoyage
############################################################
clean:
	rm -f $(EXECUTABLES) $(SRC_DIR)/*.o

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
