#include <stdio.h>
// Challenge 5 : Fonction de Factorielle
// Écrivez une fonction en C qui calcule la factorielle d'un entier positif. La fonction doit prendre un entier en paramètre et retourner sa factorielle. 
// Créez un programme principal qui utilise cette fonction pour afficher la factorielle d'un nombre donné.
int factorielle(int n) {
    int i;
    int fact = 1;
    // Multiplie tous les entiers de 1 à n
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
int main() {
    int nombre;
    printf("Donner un nombre positif : ");
    scanf("%d", &nombre);
    if (nombre < 0) {
        printf("Erreur : la factorielle n'est pas définie pour les nombres négatifs.\n");
    } else {
        printf("La factorielle de %d est : %d\n", nombre, factorielle(nombre));
    }
    return 0;
}
