#include <stdio.h>
// Challenge 1 : Initialisation et Affichage
// Écrivez un programme C qui initialise un tableau d'entiers avec des valeurs données et affiche ces valeurs. Par exemple, vous pouvez initialiser un tableau avec les valeurs 
// [1, 2, 3, 4, 5] et afficher chaque valeur sur une nouvelle ligne.

// int main(){
//     int i,n;
//     int tab[n];
//     printf("entrer la taille de table:\n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("%d=%d",i,tab[i]);w
//     }
// }

// Challenge 2 : Saisie et Affichage des Éléments
// Écrivez un programme C qui demande à l'utilisateur le nombre d'éléments d'un tableau, puis demande à l'utilisateur de saisir ces éléments.
//  Affichez ensuite les éléments du tableau.
// int main(){
//     int i,n;
//     printf("entrer la taille de table:\n");
//     scanf("%d",&n);
//     int tab[n];
//     for(i=0;i<n;i++){
//         printf("les element de tablaux :%d \n",i);
//         scanf("%d",&tab[i]);
//     }
//     printf("l affichage des elements sont:\n");
//     for(i=0;i<n;i++){
//         printf("Tab[%d] = %d \n",i,tab[i]);
//     }
// // }
// Challenge 3 : Somme des Éléments
// Écrivez un programme C qui calcule et affiche la somme des éléments d'un tableau d'entiers. 
// Le programme doit demander le nombre d'éléments, puis les éléments du tableau, et afficher la somme totale.

// int main(){
//     int i ,n;
//     int somme=0;
//     printf("entrer les nombres d elements :\n");
//     scanf("%d",&n);
//     int tab[n];
//     for(i=0;i<n;i++){
//         printf("les elements de tablaux:%d\n",i);
//         scanf("%d",&tab[i]);  
//     }
//     for(i=0;i<n;i++) {
//         somme=somme+tab[i];
//     }
//     printf("la somme totale %d",somme );
// }

// challange 4: Trouver le Maximum;
// Écrivez un programme C qui trouve et affiche le plus grand élément dans un tableau d'entiers.
//  Le programme doit demander le nombre d'éléments et les éléments du tableau.
// int main(){
//     int i,n;
//     int max=0;
//     printf("entrer les nombres d elements :\n");
//     scanf("%d",&n);
//     int tab[n];
//     for(i=0;i<n;i++){
//         printf("les elements de tablaux:%d\n",i);
//         scanf("%d",&tab[i]);  
// }
//     for(i=0;i<n;i++){
//         if(tab[i]>max){
//             max=tab[i];
//         }
//     }
//     printf("la plus grand elements dans le tablaux c est: %d",max);
// //  }
// Challenge 5 : Trouver le Minimum
// Écrivez un programme C qui trouve et affiche le plus petit élément dans un tableau d'entiers. 
// Le programme doit demander le nombre d'éléments et les éléments du tableau.

  int main() {
    int i,n;
    int min=0;
    printf("entrer la taille de table :\n");
    scanf("%d",&n);
     int tab[n];
     for(i=0;i<n;i++){
        printf("les element de table : %d",i);
        scanf("%d",&tab[i]);
     }
     for(i=0;i<n;i++){
        if(tab<min){
            min=tab[i];
        }
     }
     printf("le min sur le tablau c est la varibe ")
  }
