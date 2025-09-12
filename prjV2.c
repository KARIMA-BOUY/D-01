#include <stdio.h>
#include <string.h>
#define Max_Equipe 100

struct Equipe {
    int id;
    char nom[20];
    char prenom[20];
    int numMaillot;
    char poste[20];
    int age;
    int buts;
};
struct Equipe Equipes[Max_Equipe] =
{
    {1,"Messi","Lionel",10,"Attaquant",36,30},
    {2,"Ronaldo","Cristiano",7,"Attaquant",38,25},
    {3,"Mbappe","Kylian",7,"Attaquant",25,20},
    {4,"DeBruyne","Kevin",17,"Milieu",32,10},
    {5,"Alisson","Becker",1,"Gardien",31,0}
};
int nbrJoueur = 5; 
// ===== Ajout =====
void Ajout() {
    if (nbrJoueur >= Max_Equipe) {
        printf("L'equipe est pleine !\n");
        return;
    }
    Equipes[nbrJoueur].id = nbrJoueur + 1;
    printf("Entrer le nom : ");
    scanf("%s", Equipes[nbrJoueur].nom);
    printf("Entrer le prenom : ");
    scanf("%s", Equipes[nbrJoueur].prenom);
    printf("Entrer le numero du maillot : ");
    scanf("%d", &Equipes[nbrJoueur].numMaillot);
    printf("Entrer l'age : ");
    scanf("%d", &Equipes[nbrJoueur].age);
    printf("Entrer le poste : ");
    scanf("%s", Equipes[nbrJoueur].poste);
    printf("Entrer le nombre de buts : ");
    scanf("%d", &Equipes[nbrJoueur].buts);
    nbrJoueur++;
    printf("Ajout avec succes !\n");
}
void ajoutJoueur() {
    int choix, n;
    printf("\n== Ajouter Joueur ==\n");
    printf("1. Ajouter un seul joueur\n");
    printf("2. Ajouter plusieurs joueurs\n");
    printf("Votre choix : ");
    scanf("%d", &choix);
    if (choix == 1) {
        Ajout();
    } else if (choix == 2) {
        printf("Combien de joueurs voulez-vous ajouter ? ");
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            printf("Joueur %d\n", i + 1);
            Ajout();
        }
    } else {
        printf("Choix invalide !\n");
    }
}
//  Affichage 
void affichage(){
    if (nbrJoueur == 0) {
        printf("Aucun joueur dans la liste.\n");
        return;
    }
    printf("\n== Liste des joueurs ==\n");
    for (int i = 0; i < nbrJoueur; i++) {
        printf("Id:%d | Nom:%s | Prenom:%s | Maillot:%d | Age:%d | Poste:%s | Buts:%d\n",
               Equipes[i].id, Equipes[i].nom, Equipes[i].prenom,
               Equipes[i].numMaillot, Equipes[i].age,
               Equipes[i].poste, Equipes[i].buts);
    }
}
void trierParNom() {
    struct Equipe tmp;
    for (int i = 0; i < nbrJoueur - 1; i++) {
        for (int j = i + 1; j < nbrJoueur; j++) {
            if (strcmp(Equipes[i].nom, Equipes[j].nom) > 0) {
                tmp = Equipes[i];
                Equipes[i] = Equipes[j];
                Equipes[j] = tmp;
            }
        }
    }
    affichage();
}
void trierParAge() {
    struct Equipe tmp;
    for (int i = 0; i < nbrJoueur - 1; i++) {
        for (int j = i + 1; j < nbrJoueur; j++) {
            if (Equipes[i].age > Equipes[j].age) {
                tmp = Equipes[i];
                Equipes[i] = Equipes[j];
                Equipes[j] = tmp;
            }
        }
    }
    affichage();
}
void afficherPost() {
    char PostSearch[20];
    printf("Entrer le poste : ");
    scanf("%s", PostSearch);
    struct Equipe temp[Max_Equipe];
    int count = 0;
    for (int i = 0; i < nbrJoueur; i++) {
        if (strcmp(Equipes[i].poste, PostSearch) == 0) {
            temp[count++] = Equipes[i];
        }
    }
    if (count == 0) {
        printf("Aucun joueur trouvé pour ce poste.\n");
        return;
    }
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (strcmp(temp[i].nom, temp[j].nom) > 0) {
                struct Equipe tmp = temp[i];
                temp[i] = temp[j];
                temp[j] = tmp;
            }
        }
    }
    printf("Joueurs au poste %s (tries alphabetiquement):\n", PostSearch);
    for (int i = 0; i < count; i++) {
        printf("Id:%d | %s %s | Age:%d | Poste:%s | Buts:%d\n",
               temp[i].id, temp[i].nom, temp[i].prenom,
               temp[i].age, temp[i].poste, temp[i].buts);
    }
}
void affichageJouers() {
    int choix;
    do {
        printf("\n== Menu Affichage ==\n");
        printf("1. Tous les joueurs\n");
        printf("2. Trier par nom\n");
        printf("3. Trier par age\n");
        printf("4. Afficher par poste\n");
        printf("0. Retour\n");
        scanf("%d", &choix);
        switch (choix) {
            case 1: affichage(); break;
            case 2: trierParNom(); break;
            case 3: trierParAge(); break;
            case 4: afficherPost(); break;
        }
    } while (choix != 0);
}
// Modification
void ModifierPost() {
    int id;
    printf("Entrer l'ID : ");
    scanf("%d", &id);
    for (int i = 0; i < nbrJoueur; i++) {
        if (Equipes[i].id == id) {
            printf("Ancien poste : %s\n", Equipes[i].poste);
            printf("Nouveau poste : ");
            scanf("%s", Equipes[i].poste);
            printf("Modifié !\n");
            return;
        }
    }
    printf("Joueur non trouvé.\n");
}
void modifierAge() {
    int id, newAge;
    printf("Entrer l'ID : ");
    scanf("%d", &id);
    for (int i = 0; i < nbrJoueur; i++) {
        if (Equipes[i].id == id) {
            printf("Ancien age : %d\n", Equipes[i].age);
            printf("Nouveau age : ");
            scanf("%d", &newAge);
            Equipes[i].age = newAge;
            printf("Modifié !\n");
            return;
        }
    }
    printf("Joueur non trouvé.\n");
}
void ModifierButs() {
    int id, newButs;
    printf("Entrer l id: ");
    scanf("%d", &id);
    for (int i = 0; i < nbrJoueur; i++) {
        if (Equipes[i].id == id) {
            printf("%s %s | Buts actuels : %d\n",
                   Equipes[i].nom, Equipes[i].prenom, Equipes[i].buts);
            printf("Nouveau nombre : ");
            scanf("%d", &newButs);
            Equipes[i].buts = newButs;
            printf("Modifié !\n");
            return;
        }
    }
    printf("Joueur non trouvé.\n");
}
void Modification() {
    int choix;
    do {
        printf("\n== Menu Modification ==\n");
        printf("1. Modifier poste\n");
        printf("2. Modifier age\n");
        printf("3. Modifier buts\n");
        printf("0. Retour\n");
        scanf("%d", &choix);
        switch (choix) {
            case 1: ModifierPost(); break;
            case 2: modifierAge(); break;
            case 3: ModifierButs(); break;
        }
    } while (choix != 0);
}
//Suppression
void supprimerJoueur(){
    int id, trouve=0;
    printf("Entrer l'id : ");
    scanf("%d",&id);
    for(int i=0; i<nbrJoueur; i++){
        if(Equipes[i].id==id){
            trouve=1;
            for(int j=i; j<nbrJoueur-1; j++){
                Equipes[j] = Equipes[j+1];
                Equipes[j].id = j+1;
            }
            nbrJoueur--;
            printf("Supprimé !\n");
            break;
        }
    }
    if(!trouve) printf("Joueur non trouvé.\n");
}
//Recherche
void SearchById(){
    int id, trouve=0;
    printf("Entrer l'id : ");
    scanf("%d",&id);
    for(int i=0; i<nbrJoueur; i++){
        if(Equipes[i].id==id){
            printf("Id:%d | %s %s | Age:%d | Poste:%s | Buts:%d\n",
                   Equipes[i].id, Equipes[i].nom, Equipes[i].prenom,
                   Equipes[i].age, Equipes[i].poste, Equipes[i].buts);
            trouve=1;
            break;
        }
    }
    if(!trouve) printf("Joueur non trouvé.\n");
}
void SearchByNom(){
    char nom[20];
    int trouve=0;
    printf("Entrer le nom : ");
    scanf("%s",nom);
    for(int i=0; i<nbrJoueur; i++){
        if(strcmp(Equipes[i].nom, nom) == 0){
            printf("Id:%d | %s %s | Age:%d | Poste:%s | Buts:%d\n",
                   Equipes[i].id, Equipes[i].nom, Equipes[i].prenom,
                   Equipes[i].age, Equipes[i].poste, Equipes[i].buts);
            trouve=1;
            break;
        }
    }
    if(!trouve) printf("Joueur non trouvé.\n");
}
void recherche(){
    int choix;
    do{
        printf("\n== Menu Recherche ==\n");
        printf("1. Par ID\n");
        printf("2. Par Nom\n");
        printf("0. Retour\n");
        scanf("%d",&choix);
        switch(choix){
            case 1: SearchById(); break;
            case 2: SearchByNom(); break;
        }
    } while(choix!=0);
}
// ===== Statistiques 
int TotalJoueur(){
    return nbrJoueur;
}
int AgeMoyen(){
    if(nbrJoueur==0) return 0;
    int somme=0;
    for(int i=0; i<nbrJoueur; i++){
        somme = somme+Equipes[i].age;
    }
    return (int) somme/nbrJoueur;
}
int meilleurButteur(){
    if(nbrJoueur==0) return -1;
    int max=Equipes[0].buts, pos=0;
    for(int i=1; i<nbrJoueur; i++){
        if(Equipes[i].buts > max){
            max=Equipes[i].buts;
            pos=i;
        }
    }
    return pos;
}
void JoueurAgeJeune(){
    if(nbrJoueur==0){
        printf("Aucun joueur.\n");
        return;
    }
    int minAge=Equipes[0].age, maxAge=Equipes[0].age;
    int posJeune=0, posVieux=0;
    for(int i=1; i<nbrJoueur; i++){
        if(Equipes[i].age < minAge){
            minAge = Equipes[i].age;
            posJeune=i;
        }
        if(Equipes[i].age > maxAge){
            maxAge = Equipes[i].age;
            posVieux=i;
        }
    }
    printf("Le joueur le plus jeune : %s %s | Age:%d\n",
           Equipes[posJeune].nom, Equipes[posJeune].prenom, Equipes[posJeune].age);
    printf("Le joueur le plus âgé : %s %s | Age:%d\n",
           Equipes[posVieux].nom, Equipes[posVieux].prenom, Equipes[posVieux].age);
}
void PlusButs(){
    int X, trouve=0;
    printf("Entrer le minimum de buts : ");
    scanf("%d",&X);
    for(int i=0; i<nbrJoueur; i++){
        if(Equipes[i].buts > X){
            printf("id:%d | %s %s | Buts:%d\n",
                   Equipes[i].id, Equipes[i].nom,
                   Equipes[i].prenom, Equipes[i].buts);
            trouve=1;
        }
    }
    if(!trouve) printf("Aucun joueur n a marque plus de %d buts.\n", X);
}
void statistique(){
    int choix;
    do{
        printf("\n=== Menu Statistiques ===\n");
        printf("1. Nombre total de joueurs\n");
        printf("2. Age moyen\n");
        printf("3. Meilleur buteur\n");
        printf("4. Joueur le plus jeune & le plus vieux\n");
        printf("0. Retour\n");
        scanf("%d",&choix);
        switch(choix){
            case 1:
                printf("Total joueurs : %d\n", TotalJoueur());
                break;
            case 2:
                printf("age moyen : %.d\n", AgeMoyen());
                break;
            case 3: {
                int idx = meilleurButteur();
                if(idx!=-1)
                    printf("Meilleur buteur : %s %s | Buts:%d\n",
                           Equipes[idx].nom, Equipes[idx].prenom, Equipes[idx].buts);
                else
                    printf("Aucun joueur !\n");
                break;
            }
            case 4: JoueurAgeJeune();break;
            case 5:PlusButs();break;
        }
    }while(choix!=0);
}
//  Main 
int main() {
    int choix;
    do {
        printf("\n===== Gestion Equipe =====\n");
        printf("1. Ajouter joueur\n");
        printf("2. Afficher joueurs\n");
        printf("3. Modifier joueur\n");
        printf("4. Supprimer joueur\n");
        printf("5. Rechercher joueur\n");
        printf("6. Statistiques\n");
        printf("0. Quitter\n");
        scanf("%d", &choix);
        switch (choix) {
            case 1: ajoutJoueur(); break;
            case 2: affichageJouers(); break;
            case 3: Modification(); break;
            case 4: supprimerJoueur(); break;
            case 5: recherche(); break;
            case 6: statistique(); break;
        }
    } while (choix != 0);
    return 0;
}
