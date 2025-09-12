#include <stdio.h>
// Challenge 2 : Fonction de Multiplication
// Écrivez une fonction en C qui prend deux entiers en paramètres et retourne leur produit.
//  Créez un programme principal qui utilise cette fonction pour afficher le produit de deux nombres.

int produit(int a, int b){
   return a*b;
}
int main(){
    int x , y, res;
    printf("entrer premier number: \n");
    scanf("%d",&x);
    printf("entrer dexieme number: \n");
    scanf("%d",&y);
    res=produit(x,y);
    printf("produit de deux number :%d",res);
    return 0;
}