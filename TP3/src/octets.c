#include <stdio.h>
#include <stdint.h>

int main() {
    // Déclaration des variables de différents types
    short s = 0x0302;
    int i = 0x04030201;
    long int li = 0x0807060504030201L;
    float f = 2.5f;
    double d = 1.0;
    long double ld = 1.0L;
    
    // Pointeurs pour accéder aux octets
    unsigned char *ptr;
    
    // Affichage des octets de short
    printf("Octets de short :\n ");
    ptr = (unsigned char *)&s;
    for (size_t j = 0; j < sizeof(short); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n\n");
    
    // Affichage des octets de int
    printf("Octets de int :\n ");
    ptr = (unsigned char *)&i;
    for (size_t j = 0; j < sizeof(int); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n\n");
    
    // Affichage des octets de long int
    printf("Octets de long int :\n ");
    ptr = (unsigned char *)&li;
    for (size_t j = 0; j < sizeof(long int); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n\n");
    
    // Affichage des octets de float
    printf("Octets de float :\n ");
    ptr = (unsigned char *)&f;
    for (size_t j = 0; j < sizeof(float); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n\n");
    
    // Affichage des octets de double
    printf("Octets de double :\n ");
    ptr = (unsigned char *)&d;
    for (size_t j = 0; j < sizeof(double); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n\n");
    
    // Affichage des octets de long double
    printf("Octets de long double :\n ");
    ptr = (unsigned char *)&ld;
    for (size_t j = 0; j < sizeof(long double); j++) {
        printf("%02x ", ptr[j]);
    }
    printf("\n");
    
    return 0;
}
