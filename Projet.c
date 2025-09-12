
#include <stdio.h>
#include <string.h>
int main() {
    char titre[50][50];
    char auteur[50][50];
    float price[50];
    int quantite[50];
    int choix;
    int nbrlivre = 0;
    int nbr;
    int i, indic;
    int total;
    do {
        printf("\n Menu de gestion de stock dans une librairie \n");
        printf("1 - Ajouter un livre au stock\n");
        printf("2 - Afficher tous les livres disponibles\n");
        printf("3 - Rechercher un livre par son titre\n");
        printf("4 - Mettre a jour la quantite d'un livre\n");
        printf("5 - Supprimer un livre du stock\n");
        printf("6 - Afficher le nombre total de livres en stock\n");
        printf("0 - Quitter\n");
        printf("Entrer votre choix: ");
        scanf("%d", &choix);
        switch (choix) {
            // 1. Ajouter un livre
            case 1: {
                printf("Entrer le nombre de livres a ajouter: ");
                scanf("%d", &nbr);
                for (i = 0; i < nbr; i++) {
                    printf("Entrer le titre du livre : ");
                    scanf("%s", titre[nbrlivre]);
                    printf("Entrer l'auteur du livre : ");
                    scanf("%s", auteur[nbrlivre]);
                    printf("Entrer le prix du livre : ");
                    scanf("%f", &price[nbrlivre]);
                    printf("Entrer la quantite du livre : ");
                    scanf("%d", &quantite[nbrlivre]);
                    nbrlivre++;
                }
            } break;
            // 2. Affichage des livres
            case 2: {
                if (nbrlivre == 0) {
                    printf("Aucun livre en stock.\n");
                } else {
                    printf("\nListe des livres:\n");
                    for (i = 0; i < nbrlivre; i++) {
                        printf("title: %s | auteur: %s | price: %.2f | quantite: %d\n",
                               titre[i], auteur[i], price[i], quantite[i]);
                    }
                }
            } break;
            // 3. search:
            case 3: {
                char search[100];
                int indice = 0;
                printf("Entrer le titre du livre a rechercher: ");
                scanf("%s", search);
                for (i = 0; i < nbrlivre; i++) {
                    if (strcmp(search, titre[i]) == 0) {
                        printf("title: %s | auteur: %s | price: %.2f | quantite: %d\n",
                               titre[i], auteur[i], price[i], quantite[i]);
                        indice = 1;
                        break;
                    }
                }
                if (!indice) {
                    printf("Livre introuvable.\n");
                }
            } break;
            // 4. Update quantite
            case 4: {
                char search[100];
                int indice = 0;
                printf("Entrer le titre du livre a mettre a jour: ");
                scanf("%s", search);
                for (i = 0; i < nbrlivre; i++) {
                    if (strcmp(search, titre[i]) == 0) {
                        printf("Quantite actuelle: %d\n", quantite[i]);
                        printf("Entrer la nouvelle quantite: ");
                        scanf("%d", &quantite[i]);  
                        indice = 1;
                        printf("Quantite mise a jour avec succes.\n");
                    }
                }
                if (!indice) {
                    printf("Livre introuvable.\n");
                }
            } break;  
           // 5. Supprimer
        case 5: {
        if (nbrlivre == 0) {
        printf("Aucun livre a supprimer.\n");
    } else {
        int pos;
        int index;
        printf("Donner la position du livre a supprimer (1-%d): ", nbrlivre);
        scanf("%d", &pos);
        if (pos < 1 || pos > nbrlivre) {
            printf("Position invalide !\n");
        } else {
             index = pos - 1;
            for (i = index; i < nbrlivre - 1; i++) {
                strcpy(titre[i], titre[i + 1]);
                strcpy(auteur[i], auteur[i + 1]);
                price[i] = price[i + 1];
                quantite[i] = quantite[i + 1];
            }
            nbrlivre--;
            printf("Livre supprime avec succes.\n");
        }
    }
} break;
            }
             break;
            // 6. Total stock
            case 6: {                
                total = 0;
                for (i = 0; i < nbrlivre; i++) {
                    total =  total+quantite[i];
                }
                printf("Nombre total de livres en stock : %d\n", total);
            }  
        }
            break;
            case 0:
                printf("Quitter.\n");
                break;
            default:
                printf("Choix invalide !\n");
        }
    } while (choix != 0);
}


