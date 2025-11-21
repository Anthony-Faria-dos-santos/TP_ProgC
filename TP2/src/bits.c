#include <stdio.h>

int main() {
    /* 
       On suppose un entier sur 32 bits.
       4eme bit de gauche : bit 28 (si bit 31 est le 1er)
       20eme bit de gauche : bit 12 (si bit 31 est le 1er)
       
       Pour tester, on peut construire un nombre qui a ces bits a 1.
       (1 << 28) | (1 << 12)
    */
    int d = (1 << 28) | (1 << 12); 
    // On peut tester avec d'autres valeurs pour voir si ca affiche 0.
    // int d = 0; 

    // Masques
    int mask4 = 1 << 28;
    int mask20 = 1 << 12;

    if ((d & mask4) && (d & mask20)) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
