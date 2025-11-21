# Makefile pour TP4
CC = gcc
CFLAGS = -Wall -Wextra -std=c11
SRC_DIR = src

# Fichiers objets communs
OPERATOR_OBJ = $(SRC_DIR)/operator.o
FICHIER_OBJ = $(SRC_DIR)/fichier.o
LISTE_OBJ = $(SRC_DIR)/liste.o

# Exécutables
EXECUTABLES = main etudiant_bd calcule factorielle chercherfichier

# Règle par défaut
all: $(EXECUTABLES)

# Programme principal (exercices 4.1, 4.2, 4.7)
main: $(SRC_DIR)/main.o $(OPERATOR_OBJ) $(FICHIER_OBJ) $(LISTE_OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Exercice 4.3 - Base de données étudiante
etudiant_bd: $(SRC_DIR)/etudiant_bd.o $(FICHIER_OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Exercice 4.4 - Calculatrice en ligne de commande
calcule: $(SRC_DIR)/calcule.o $(OPERATOR_OBJ)
	$(CC) $(CFLAGS) -o $@ $^

# Exercice 4.5 - Factorielle
factorielle: $(SRC_DIR)/factorielle.o
	$(CC) $(CFLAGS) -o $@ $^

# Exercice 4.6 - Recherche dans fichier
chercherfichier: $(SRC_DIR)/chercherfichier.o
	$(CC) $(CFLAGS) -o $@ $^

# Règles de compilation des fichiers objets
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

# Dépendances des headers
$(SRC_DIR)/main.o: $(SRC_DIR)/operator.h $(SRC_DIR)/fichier.h $(SRC_DIR)/liste.h
$(SRC_DIR)/operator.o: $(SRC_DIR)/operator.h
$(SRC_DIR)/fichier.o: $(SRC_DIR)/fichier.h
$(SRC_DIR)/liste.o: $(SRC_DIR)/liste.h
$(SRC_DIR)/etudiant_bd.o: $(SRC_DIR)/fichier.h
$(SRC_DIR)/calcule.o: $(SRC_DIR)/operator.h

# Nettoyage
clean:
	rm -f $(SRC_DIR)/*.o $(EXECUTABLES)

# Nettoyage complet (inclut les fichiers générés)
cleanall: clean
	rm -f etudiant.txt *.txt

# Aide
help:
	@echo "Makefile pour TP4"
	@echo ""
	@echo "Cibles disponibles:"
	@echo "  all            - Compile tous les programmes"
	@echo "  main           - Compile le programme principal (ex 4.1, 4.2, 4.7)"
	@echo "  etudiant_bd    - Compile le programme de gestion étudiante (ex 4.3)"
	@echo "  calcule        - Compile la calculatrice en ligne de commande (ex 4.4)"
	@echo "  factorielle    - Compile le programme de factorielle (ex 4.5)"
	@echo "  chercherfichier - Compile le programme de recherche (ex 4.6)"
	@echo "  clean          - Supprime les fichiers objets et exécutables"
	@echo "  cleanall       - Supprime tout (objets, exécutables, fichiers générés)"
	@echo "  help           - Affiche cette aide"

.PHONY: all clean cleanall help
