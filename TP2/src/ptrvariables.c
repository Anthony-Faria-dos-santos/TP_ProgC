#include <stdio.h>

int main() {
    // Declaration des variables
    char c = 'a';
    short s = 123;
    int i = 456;
    long l = 7890L;
    long long ll = 123456789LL;
    float f = 3.14f;
    double d = 2.71828;
    long double ld = 1.6180339887L;

    // Pointeurs
    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pl = &l;
    long long *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    // Affichage avant manipulation
    printf("Avant manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %x\n", (void*)pc, c);
    printf("Adresse de s : %p, Valeur de s : %x\n", (void*)ps, s);
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)pi, i);
    printf("Adresse de l : %p, Valeur de l : %lx\n", (void*)pl, l);
    printf("Adresse de ll : %p, Valeur de ll : %llx\n", (void*)pll, ll);
    // Pour float et double, %x attend un entier, on peut caster ou utiliser une union ou memcpy pour voir la rep binaire, 
    // mais l'enonce demande juste d'afficher la valeur. 
    // L'exemple montre "Valeur de f : 40000000" ce qui est la rep hex du float.
    // On va caster l'adresse en int* pour afficher le contenu brut pour float (attention a la taille)
    printf("Adresse de f : %p, Valeur de f : %x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %llx\n", (void*)pd, *(unsigned long long*)pd);
    // long double est plus complexe (16 bytes sur mac ?), on va simplifier ou afficher juste l'adresse.
    printf("Adresse de ld : %p\n", (void*)pld);

    // Manipulation via pointeurs
    *pc = 'b';
    *ps = 456;
    *pi = 789;
    *pl = 12345L;
    *pll = 987654321LL;
    *pf = 6.28f;
    *pd = 1.414;
    
    printf("\nAprès manipulation :\n");
    printf("Adresse de c : %p, Valeur de c : %x\n", (void*)pc, c);
    printf("Adresse de s : %p, Valeur de s : %x\n", (void*)ps, s);
    printf("Adresse de i : %p, Valeur de i : %x\n", (void*)pi, i);
    printf("Adresse de l : %p, Valeur de l : %lx\n", (void*)pl, l);
    printf("Adresse de ll : %p, Valeur de ll : %llx\n", (void*)pll, ll);
    printf("Adresse de f : %p, Valeur de f : %x\n", (void*)pf, *(unsigned int*)pf);
    printf("Adresse de d : %p, Valeur de d : %llx\n", (void*)pd, *(unsigned long long*)pd);

    return 0;
}
