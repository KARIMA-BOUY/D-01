#include <stdio.h>
// Challenge 1 : Fonction de Somme
// Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur somme. 
// Créez un programme principal qui utilise cette fonction pour afficher la somme de deux nombres.

#include <stdio.h>
int somme(int a, int b) {
    return a + b;
}
int main() {
    int x, y, res;
    printf("Entrez le premier nombre: ");
    scanf("%d", &x);
    printf("Entrez le deuxieme nombre: ");
    scanf("%d", &y);
    res= somme(x, y);
    printf("La somme c est",res);
    return 0;
}
