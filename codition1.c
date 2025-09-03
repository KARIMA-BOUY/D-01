#include <stdio.h>


Écrivez un programme qui demande un nombre et affiche si ce nombre est pair ou impair.
int main() {
    int nombre;
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);
    if (nombre % 2 == 0) {
        printf("%d est pair.\n", nombre);
    } else {
        printf("%d est impair.\n", nombre);
    }
    return 0;
}

// Voyelle ou Non:

#include <stdio.h>

int main() {
    char c;
    printf("Entrez un caractère : ");
    scanf("%c", &c);
    switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c est une voyelle.\n", c);
            break;
        default:
            printf("%c n'est pas une voyelle.\n", c);
    }
    return 0;
// }
// Challenge 3 : Somme de Deux Valeurs:

int main() {
    int a, b, somme;
    printf("Entrez la première valeur : ");
    scanf("%d", &a);
    printf("Entrez la deuxieme valeur : ");
    scanf("%d", &b);
    if (a == b) {
        somme = 3 * (a + b);  /
    } else {
        somme = a + b;        
    }
    printf("Le resultat est : %d\n", somme);
    return 0;
}
//  Equation du Deuxième Degré:

int main() {
    float a, b, c, delta, x1, x2;

    printf("Entrez a : ");
    scanf("%f", &a);
    printf("Entrez b : ");
    scanf("%f", &b);
    printf("Entrez c : ");
    scanf("%f", &c);
    if (a == 0) {
        printf(" n est pas une quation \n");
    } else {
        delta = b*b - 4*a*c;

        if (delta > 0) {
            x1 = (-b - sqrt(delta)) / (2*a);
            x2 = (-b + sqrt(delta)) / (2*a);
            printf("Deux solutions  : x1 = %.2f et x2 = %.2f\n", x1, x2);
        }
        else if (delta == 0) {
            x1 = -b / (2*a);
            printf("Une solution  : x = %.2f\n", x1);
        }
        else {
            printf("Pas de solutions.\n");
        }
    }
    return 0;
}

// Challenge 6 : Positif, Négatif ou Nul:

int main() {
    int n;
    printf("Entrez un nombre : ");
    scanf("%d", &n);

    if (nombre > 0) {
        printf("%d est positif.\n", n);
    }
    else if (nombre < 0) {
        printf("%d est negatif.\n", n);
    }
    else {
        printf("Le nombre est nul.\n");
    }
    return 0;
}

// Challenge 7 : Alphabet Majuscule:

// int main() {
    char c;
    printf("Entrez un caractere : ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf("%c est une lettre majuscule.\n", c);
    } else {
        printf("%c n'est pas une lettre majuscule.\n", c);
    }
    return 0;
}

// Challenge 8 : Mention Obtenue:

// int main() {
    float moyenne;

    printf("Entrez la moyenne  : ");
    scanf("%f", &moyenne);

    if (moyenne < 10) {
        printf("Recale\n");
    } else if (moyenne >= 10 && moyenne < 12) {
        printf("Mention : Passable\n");
    } else if (moyenne >= 12 && moyenne < 14) {
        printf("Mention : Assez bien\n");
    } else if (moyenne >= 14 && moyenne < 16) {
        printf("Mention : Bien\n");
    } else if (moyenne >= 16) {
        printf("Mention : Tres bien\n");
    }

    return 0;
}





