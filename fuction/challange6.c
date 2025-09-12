
// Challenge 6 : Fonction de Fibonacci
// Écrivez une fonction en C qui calcule le n-ième terme de la suite de Fibonacci. La fonction doit prendre un entier en paramètre et retourner le n-ième terme. 
// Créez un programme principal qui utilise cette fonction pour afficher le terme de Fibonacci demandé.

#include <stdio.h>
int fibonacci(int n){
    if(n==0) return 0;
    else if (n==1) return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    printf("entrer la valeur de n :\n");
    scanf("%d",&n);
    printf("")
}