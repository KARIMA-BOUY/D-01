#include <stdio.h>
int Maximum(int a,int b){
   if(a<b){
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
    printf("Le minimum number %d",res);
}
