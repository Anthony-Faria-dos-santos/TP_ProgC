# Programmation en C

Sujets de travaux pratiques du module **Programmation en C**

## ⚙️ Compilation rapide avec Make

⚠️ Compilation make ajouté par Anthony Faria et non inclu dans le TP initial.

Chaque dossier de TP (TP1, TP2, TP3, TP4, …) possède un `Makefile` permettant de compiler tous les programmes du TP en une seule commande. Les exécutables sont générés à la racine du dossier du TP.

### Usage de base

```bash
cd TP4      # ou TP1, TP2, TP3, ...
make        # compile tous les exécutables
./main      # exécuter un programme (exemple)
make clean  # supprimer les exécutables
make cleanall  # supprimer les exécutables et fichiers .o / .txt etc
```

### Installation de Make (multi-OS)

Make est souvent préinstallé sur Linux/macOS. Sinon :

| Système                  | Commandes                                                                                              |
| ------------------------ | ------------------------------------------------------------------------------------------------------ |
| macOS                    | `xcode-select --install` (outils Apple) OU `brew install make` (Homebrew). GNU make peut être `gmake`. |
| Windows (WSL recommandé) | Installer WSL puis Ubuntu depuis le Store, ensuite `sudo apt install build-essential`.                 |
| Windows (alternatives)   | Chocolately: `choco install make` ; Scoop: `scoop install make` ; MSYS2: installer via pacman.         |
| Ubuntu / Debian          | `sudo apt update && sudo apt install build-essential`                                                  |
| Fedora / RHEL / CentOS   | `sudo dnf groupinstall "Development Tools"` OU `sudo dnf install make gcc`                             |
| Arch Linux               | `sudo pacman -S base-devel`                                                                            |
| Alpine Linux             | `sudo apk add build-base`                                                                              |
| Autres Linux             | Installez le groupe développement (make + gcc).                                                        |

### Vérifier l'installation

```bash
make -v
which make
```

Si non trouvé : ajouter le chemin d'installation (Homebrew, MSYS2, etc.) à votre `PATH`.

### Personnalisation

- Recompiler un seul programme : `make nomprogramme` (ex: `make factorielle`).
- Nettoyer : `make clean`.
- TP3 dispose d'une cible de diagnostic : `make liste`.
- Vous pouvez ajuster les options dans `CFLAGS` (ex: `-O2`, `-g`).

---

## Année: 2024-2025

### Sujets de travaux pratiques

- [TP1](TP1/TP1.md)
- [TP2](TP2/TP2.md)
- [TP3](TP3/TP3.md)
- [TP4](TP4/TP4.md)
- [TP5](TP5/TP5.md)
- [TP6](TP6/TP6.md)

#### Objectifs

Les objectifs du module sont de comprendre les différents aspects de la programmation en C et de créer un projet en C. Après avoir réalisé les exercices, vous serez capable de :

- Comprendre la chaîne de compilation en utilisant GCC (GNU Compiler Collection) : du prétraitement à l'exécution.
- Travailler avec les bibliothèques standard et effectuer des appels système (gestion des fichiers, sockets réseau, etc.).
- Comprendre les pointeurs et manipuler les buffers en les utilisant.
- Créer, compiler et exécuter un projet en C.
- Manipuler différents formats de données, tels que BMP, et utiliser des structures de données.
- Créer un simple programme client-serveur pour le transfert de fichiers et de messages.
- Tester une application.

#### Environnement de programmation

Le laboratoire numérique : [lab-boris.fr](http://lab-boris.fr/)

#### Evaluation

1. Il y a six travaux pratiques. Chaque travail pratique (TP) comporte plusieurs exercices, et chaque exercice est noté.
2. Le total des points pour tous les travaux pratiques est de 20.
3. Les rendus doivent être faits en ligne.
4. Chaque question a un niveau de difficulté :
   - ★ : Facile
   - ★★ : Moyenne
   - ★★★ : Difficile

#### Rendus

- **c. src/** : le code source dans le répertoire _src_

#### Liste de contrôle

Avant de déposer votre travail pratique, assurez-vous de respecter la liste de contrôle suivante :

- ✅ Les noms des fichiers de chaque exercice respectent ceux demandés dans les travaux pratiques.
- ✅ Votre code est bien commenté.
- ✅ Votre code se compile sans aucune erreur (et, si possible, sans aucun avertissement).

#### Modèle de code

Vous pouvez cloner ce Repository sur votre instance du laboratoire en utilisant les commandes suivantes :

```bash
git clone https://github.com/OpenRSI/TP_ProgC
cd TP_ProgC
ls
```

Pour obtenir les dernières mises à jour de vos modifications GitHub, vous pouvez exécuter la commande suivante :

```bash
git pull
```
