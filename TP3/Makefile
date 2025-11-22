############################################################
# Makefile TP3 - Compilation de chaque source en exécutable
# Chaque fichier src/nom.c produit un exécutable ./nom à la racine de TP3
############################################################

CC      = gcc
CFLAGS  = -Wall -Wextra -std=c99
SRC_DIR = src

# Tous les .c
SOURCES = $(wildcard $(SRC_DIR)/*.c)
# Fichiers contenant une fonction main (détection manuelle pour éviter parsing make)
WITH_MAIN = \
	$(SRC_DIR)/chercher.c \
	$(SRC_DIR)/chercher2.c \
	$(SRC_DIR)/couleur_compteur.c \
	$(SRC_DIR)/grand_petit.c \
	$(SRC_DIR)/octets.c \
	$(SRC_DIR)/recherche_dichotomique.c \
	$(SRC_DIR)/sizeof.c \
	$(SRC_DIR)/tri.c
EXECUTABLES = $(patsubst $(SRC_DIR)/%.c,%, $(WITH_MAIN))

.PHONY: all clean help

all: $(EXECUTABLES)

liste:
	@echo "Sources : $(SOURCES)"
	@echo "Avec main : $(WITH_MAIN)"
	@echo "Executables : $(EXECUTABLES)"

%: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(EXECUTABLES)

help:
	@echo "Makefile TP3"
	@echo "Cibles : all, clean, help, liste"
	@echo "  liste -> diagnostic des fichiers construits"

############################################################
# Exemple : make && ./recherche_dichotomique
############################################################
