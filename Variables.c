#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Challenge 1 : Affichage Informations:
int main(){
    char nom[10],prenom[10],sexe[10];
    int age;
    printf("entrer votre nom:\n");
    scanf("%c",nom);
     printf("entrer votre prenom:\n");
    scanf("%c",prenom);
     printf("entrer votre sexe:\n");
    scanf("%c",sexe);
     printf("entrer votre age:\n");
    scanf("%d",&age);
    printf("Votre information c est : \n");
    printf("nom: %c \n",nom);
    printf("prenom: %c\n",prenom);
    printf("sexe: %c \n",sexe);
    printf("Age: %d \n",age);
 
  };

//   Challenge 2 : Conversion de la température

int main(){
    float C,K;
    printf("entrer la tempertaure en Celsius:\n");
    scanf("%f",&C);
    K=C+273.15;
    printf("la temperature en Celsius et la transforme en Kelvin c est:\n");
    printf("%.2f = %.2f \n",K,C);
}

// Challenge 3 : Conversion de la distance:

int main(){
    float Km ,Yards;
    printf("entrer la distance en KM: \n");
    scanf("%f",&Km);
    Yards=Km*1093.61;
    printf("la distance en kilomètres et la transforme en yards:\n");
    printf("%2.fkm=%2.fYards",Km,Yards);

};

// Challenge 4 : Conversion de la vitesse:

int main(){
    float kmh, ms;
    printf("entre la vitesse en km/h:\n");
    scanf("%f",&kmh);
    ms=kmh* 0.27778;
    printf("la vitesse en kilomètres par heure (km/h) et la transforme en mètres par seconde (m/s):\n");
    printf("%2.fm/s=%2.fkm/h",ms,kmh);
}

// Challenge 5 : Affichage Température:

int main(){
    float C ;
    printf("entrer la temperature en Celsius:\n");
    scanf("%f",&C);
    if(C > 0){
        printf("Solide");
    }
    else if(0 <= C < 100){
        printf("Liquide");
    }
    else{
        printf("Gaz");
    }
}

// // Challenge 6 : Calcul et affichage des résultats
int main(){
    int a,b;
    printf("entrer les valeurs de a :\n");
    scanf("%d",&a);
        printf("entrer les valeurs de b:\n");
        scanf("%d",&b);
    printf("a+b=%2.d \n",a+b);
        printf("a-b=%2.d\n",a-b);
    printf("axb=%2.d\n",a*b);
       if(b != 0){
        printf("a/b=%2.f\n",a/b);
       }
       else{ 
               printf("err!");
       }
}

// Challenge 7 : Moyenne pondérée de trois nombres

int main(){
    float n1,n2,n3,M;
    printf("entrer 1er nombre: \n");
    scanf("%f",&n1);
    printf("entrer 2eme nombre: \n");
    scanf("%f",&n2);
    printf("entrer 3eme nombre : \n");
    scanf("%f",&n3);
    M=(n1*2)+(n1*2)+(n1*2)/10;
    printf(" la moyenne pondérée de trois nombres:%2.f",M);

}
// Challenge 8 : Calcul de la moyenne g

int main() {
    float a, b, c, M;

    printf("Entrez les valeurs de a : ");
    scanf("%f", &a);

    printf("Entrez les valeurs de b : ");
    scanf("%f", &b);

    printf("Entrez les valeurs de c : ");
    scanf("%f", &c);
    M = pow(a * b * c, 1/3);
    printf("La moyenne geometrique est : %.2f\n", M);
    return 0;
}
// Challenge 9 : Calcul de la distance entre deux points dans un espace 3D:
int main(){
    float x1,x2,y1,y2,z1,z2, D;
    printf("entrer valeur x1:");
    scanf("%f",&x1);
     printf("entrer valeur x2:");
    scanf("%f",&x2);
     printf("entrer valeur Y1:");
    scanf("%f",&y1);
     printf("entrer valeur Y1:");
    scanf("%f",&y1);
    printf("entrer valeur z1:");
    scanf("%f",&z1);
    printf("entrer valeur z1:");
    scanf("%f",&z1);
    D=sqrt(pow(x2-x1,2)+(y2-y1,2)+(z2-z1,2));
    printf(" la distance entre deux points donnés dans un espace 3D:%2.f",D);

}

// Challenge 10 : Volume d'une sphère

int main(){
    float r,volume;
    const float Pi=3.14;
     printf("Entrez le rayon de la sphere : ");
    scanf("%f", &r);
    volume = (4/3) * Pi * pow(r, 3);
    printf("Le volume de la sphère est : %.2f\n", volume);
    return 0;
}

// Écrivez un programme pour trouver la surface d'un rectangle. Prenez la longueur

int main() {
    float longueur, largeur, surface;
    printf("Entrez la longueur du rectangle : ");
    scanf("%f", &longueur);
    printf("Entrez la largeur du rectangle : ");
    scanf("%f", &largeur);
    surface = longueur * largeur;
    printf("La surface du rectangle est : %.2f\n", surface);
}










