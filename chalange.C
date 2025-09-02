#include <stdio.h>
#include <stdlib.h>

//  Multiplicatin Function :

void Multiplication(int a){
    int i;
    printf("la table de multiplication de %d : \n",a);
    for(i=0 ;i<=10; i++)
    printf("%d x %d =%d \n",a,i,a*i);
}
int main(){
    int N;
    printf("entrer la valeur de N:");
    scanf("%d",&N);
    Multiplication(N);
return 0;
}
