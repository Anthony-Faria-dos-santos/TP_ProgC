#include <stdio.h>
#include <stdint.h>

struct Couleur {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
};

int main() {
    struct Couleur couleurs[10];

    // Initialisation
    couleurs[0] = (struct Couleur){0xef, 0x78, 0x12, 0xff};
    couleurs[1] = (struct Couleur){0x2c, 0xc8, 0x64, 0xff};
    couleurs[2] = (struct Couleur){0x00, 0x00, 0x00, 0xff};
    couleurs[3] = (struct Couleur){0xff, 0xff, 0xff, 0xff};
    couleurs[4] = (struct Couleur){0xff, 0x00, 0x00, 0x80};
    couleurs[5] = (struct Couleur){0x00, 0xff, 0x00, 0x80};
    couleurs[6] = (struct Couleur){0x00, 0x00, 0xff, 0x80};
    couleurs[7] = (struct Couleur){0x12, 0x34, 0x56, 0x78};
    couleurs[8] = (struct Couleur){0xaa, 0xbb, 0xcc, 0xdd};
    couleurs[9] = (struct Couleur){0x99, 0x88, 0x77, 0x66};

    // Affichage
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].r);
        printf("Vert : %d\n", couleurs[i].g);
        printf("Bleu : %d\n", couleurs[i].b);
        printf("Alpha : %d\n", couleurs[i].a);
        printf("\n");
    }

    return 0;
}
