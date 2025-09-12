
Fonction de Maximum
Écrivez une fonction en C qui prend deux entiers en paramètres et retourne le plus grand des deux.
 Créez un programme principal qui utilise cette fonction pour afficher le maximum entre deux nombres.

#include <stdio.h>
int Maximum(int a,int b){
   if(a>b){
    return a;
   }else
   return b;
}
int main(){
    int a,b,res;
    printf("Entrez le nombre A: ");
    scanf("%d", &a);
    printf("Entrez le nombre B: ");
    scanf("%d", &b);
    res=Maximum(a,b);
    printf("Le maximum number %d",res);
}