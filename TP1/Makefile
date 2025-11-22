############################################################
# Makefile TP1 - Compilation de chaque source en exécutable
# Chaque fichier src/nom.c produit un exécutable ./nom à la racine de TP1
############################################################

CC      = gcc
CFLAGS  = -Wall -Wextra -std=c99
SRC_DIR = src

# Récupère tous les .c
SOURCES      = $(wildcard $(SRC_DIR)/*.c)
# Transforme src/nom.c -> nom
EXECUTABLES  = $(patsubst $(SRC_DIR)/%.c,%, $(SOURCES))

.PHONY: all clean help

all: $(EXECUTABLES)

# Règle générique : cible "nom" dépend de src/nom.c
%: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(EXECUTABLES)

help:
	@echo "Makefile TP1"
	@echo "Cibles disponibles :"
	@echo "  all    -> compile tous les exécutables"
	@echo "  clean  -> supprime les exécutables"
	@echo "  help   -> affiche cette aide"

############################################################
# Utilisation :
#   make        (compile tout)
#   ./bonjour   (exécuter un programme)
############################################################
