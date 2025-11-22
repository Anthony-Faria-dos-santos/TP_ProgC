############################################################
# Makefile TP2 - Compilation de chaque source en exécutable
# Chaque fichier src/nom.c produit un exécutable ./nom à la racine de TP2
############################################################

CC      = gcc
CFLAGS  = -Wall -Wextra -std=c99
SRC_DIR = src

SOURCES     = $(wildcard $(SRC_DIR)/*.c)
EXECUTABLES = $(patsubst $(SRC_DIR)/%.c,%, $(SOURCES))

.PHONY: all clean help

all: $(EXECUTABLES)

%: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -o $@ $<

clean:
	rm -f $(EXECUTABLES)

help:
	@echo "Makefile TP2"
	@echo "Cibles : all, clean, help"

############################################################
# Exemple : make && ./fibonacci
############################################################
