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
struct Equipe Equipes[Max_Equipe];
//= {
//     {1,"Messi","Lionel",10,"Attaquant",36,30},
//     {2,"Ronaldo","Cristiano",7,"Attaquant",38,25},
//     {3,"Mbappe","Kylian",7,"Attaquant",25,20},
//     {4,"DeBruyne","Kevin",17,"Milieu",32,10},
//     {5,"Alisson","Becker",1,"Gardien",31,0}
// };
int nbrJoueur = 0; 
// Prototypes
void ajoutJoueur();
void affichageJouers();
void Modification();
void ModifierPost();
void modifierAge();
void ModifierButs();
void trierParNom();
void trierParAge();
void supprimerJoueur();
void recherche();
void statistique();
// Ajouter un joueur
void Ajout() {
    static int nextId=1;
    if (nbrJoueur >= Max_Equipe) {
        printf("L'equipe est pleine !\n");
        return;
    }
    Equipes[nbrJoueur].id = nextId++;
    printf("Entrer le nom : ");
    scanf("%s", Equipes[nbrJoueur].nom);
    printf("Entrer le prenom : ");
    scanf("%s", Equipes[nbrJoueur].prenom);
    printf("Entrer le numero du maillot : ");
    scanf("%d", &Equipes[nbrJoueur].numMaillot);
    printf("Entrer l'age : ");
    scanf("%d", &Equipes[nbrJoueur].age);
    printf("Entrer le poste (gardien, defenseur, milieu, attaquant): ");
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
// Affichage
void affichage(){
    if (nbrJoueur == 0) {
        printf("Aucun joueur dans la liste.\n");
        return;
    }
    printf("\n== Liste des joueurs ==\n");
    for (int i = 0; i < nbrJoueur; i++) {
        printf("Id: %d | Nom: %s | Prenom: %s | Maillot: %d | Age: %d | Poste: %s | Buts: %d\n",
               Equipes[i].id,
               Equipes[i].nom,
               Equipes[i].prenom,
               Equipes[i].numMaillot,
               Equipes[i].age,
               Equipes[i].poste,
               Equipes[i].buts);
    }
}
// Trier par nom
void trierParNom() {
    struct Equipe tmp;
    for (int i = 0; i < nbrJoueur - 1; i++) {
        for (int j = 0; j < nbrJoueur-i-1; j++) {
            if (strcmp(Equipes[j].nom, Equipes[j+1].nom) > 0) {
                tmp = Equipes[j];
                Equipes[j] = Equipes[j+1];
                Equipes[j+1] = tmp;
            }
        }
    }
    printf("Joueurs tries par nom :\n");
    affichage();
}
// Trier par age
void trierParAge() {
    struct Equipe tmp;
    for (int i = 0; i < nbrJoueur - 1; i++) {
        for (int j = 0; j < nbrJoueur-i-1; j++) {
            if (Equipes[j].age > Equipes[j+1].age) {
                tmp = Equipes[j];
                Equipes[j] = Equipes[j+1];
                Equipes[j+1] = tmp;
            }
        }
    }
    printf("Joueurs tries par age :\n");
    affichage();
}
// Afficher les joueurs par poste par order alphabitique :
void afficherPost(){
    struct Equipe temp;
    char PostSearch[20];
    printf("Entrer le poste : ");
    scanf("%s", PostSearch);
    int trouve = 0;
    for(int i = 0; i < nbrJoueur; i++){
        if(strcmp(Equipes[i].poste, PostSearch) == 0){
            printf("Id: %d | Nom: %s | Prenom: %s | Maillot: %d | Age: %d | Poste: %s | Buts: %d\n",
               Equipes[i].id, Equipes[i].nom, Equipes[i].prenom,
               Equipes[i].numMaillot, Equipes[i].age,
               Equipes[i].poste, Equipes[i].buts);
            trouve = 1;
        }
    }    
    for (int i = 0; i < nbrJoueur - 1; i++) {
        for (int j = 0; j < nbrJoueur-i-1; j++) {
            if (strcmp(Equipes[j].nom, Equipes[j+1].nom) > 0) {
                temp = Equipes[j];
                Equipes[j] = Equipes[j+1];
                Equipes[j+1] = temp;
            }
        }
    }
    printf("Joueurs tries par oder alphabitique:\n");
    affichage();
}
void affichageJouers() {
    int choix;
    do {
        printf("\n== Menu Affichage ==\n");
        printf("1. Afficher tous les joueurs\n");
        printf("2. Trier par nom\n");
        printf("3. Trier par age\n");
        printf("4. Afficher les joueurs par poste \n");
        printf("0. Retour au menu principal\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: affichage(); break;
            case 2: trierParNom(); break;
            case 3: trierParAge(); break;
            case 4: afficherPost(); break;
            case 0: printf("Retour au menu principal\n"); break;
            default: printf("Choix invalide !\n");
        }
    } while (choix != 0);
}
// === Modification ===
void ModifierPost() {
    int id;
    printf("Entrer l'ID du joueur a modifier : ");
    scanf("%d", &id);
    for (int i = 0; i < nbrJoueur; i++) {
        if (Equipes[i].id == id) {
            printf("Ancien poste : %s\n", Equipes[i].poste);
            printf("Nouveau poste : ");
            scanf("%s", Equipes[i].poste);
            printf("Poste modifié avec succès !\n");
            return;
        }
    }
    printf("Joueur non trouvé.\n");
}
void modifierAge() {
    int id, newAge;
    printf("Entrer l'ID du joueur a modifier : ");
    scanf("%d", &id);
    for (int i = 0; i < nbrJoueur; i++) {
        if (Equipes[i].id == id) {
            printf("Ancien age : %d\n", Equipes[i].age);
            printf("Nouveau age : ");
            scanf("%d", &newAge);
            Equipes[i].age = newAge;
            printf("Age modifié avec succès !\n");
            return;
        }
    }
printf("Joueur non trouvé.\n");
}
void ModifierButs() {
    int id, newButs;
    printf("Entrer l ID du joueur : ");
    scanf("%d", &id);
    for (int i = 0; i < nbrJoueur; i++) {
        if (Equipes[i].id == id) {
            printf("Joueur trouve : %s %s | Buts actuels : %d\n",
            Equipes[i].nom, Equipes[i].prenom, Equipes[i].buts);
            int anciensButs = Equipes[i].buts;
            printf("Entrer le nouveau nombre de buts : ");
            scanf("%d", &newButs);
            Equipes[i].buts = newButs;
            printf("Buts modifies avec succes !\n");
            if (anciensButs < 10 && newButs >= 10) {
                printf(" %s %s est une star de l equipe !\n",Equipes[i].nom, Equipes[i].prenom);
            }
            return;
        }
    }
    printf("Joueur non trouve.\n");
}
void Modification() {
    int choix;
    do {
        printf("\n== Menu Modification ==\n");
        printf("1. Modifier poste\n");
        printf("2. Modifier age\n");
        printf("3. Modifier le nombre de buts\n");
        printf("0. Retour au menu principal\n");
        printf("Votre choix : ");
        scanf("%d", &choix);
        switch (choix) {
            case 1: ModifierPost(); break;
            case 2: modifierAge(); break;
            case 3: ModifierButs(); break;
            case 0: printf("Retour au menu principal\n"); break;
            default: printf("Choix invalide !\n");
        }
    } while (choix != 0);
}
// === Suppression ===
void supprimerJoueur(){
    int id;
    int trouve=0;
    printf("Entrer l'id du joueur à supprimer : ");
    scanf("%d",&id);
    for(int i=0; i<nbrJoueur; i++){
        if(Equipes[i].id==id){
            trouve=1;
            printf("Joueur supprimé : %s %s (id:%d)\n",
            Equipes[i].nom, Equipes[i].prenom, Equipes[i].id);
            for(int j=i; j<nbrJoueur-1; j++){
                Equipes[j] = Equipes[j+1];
                Equipes[j].id = j+1;
            }
            nbrJoueur--;
            break;
        }
    }
    if(!trouve) printf("Joueur non trouvé.\n");
}
// === Recherche ===
void SearchById(){
    int id, trouve=0;
    printf("Entrer l'id du joueur : ");
    scanf("%d",&id);
    for(int i=0; i<nbrJoueur; i++){
        if(Equipes[i].id==id){
            printf("Joueur trouvé :\n");
            printf("Id: %d | Nom: %s | Prenom: %s | Maillot: %d | Age: %d | Poste: %s | Buts: %d\n",
                   Equipes[i].id, Equipes[i].nom, Equipes[i].prenom,
                   Equipes[i].numMaillot, Equipes[i].age,
                   Equipes[i].poste, Equipes[i].buts);
            trouve=1;
            break;
        }
    }
    if(!trouve) printf("Joueur non trouvé.\n");
}
void SearchByNom(){
    char nom[20];
    int trouve=0;
    printf("Entrer le nom du joueur : ");
    scanf("%s",nom);
    for(int i=0; i<nbrJoueur; i++){
        if(strcmp(Equipes[i].nom, nom) == 0){
            printf("Joueur trouvé !\n");
            printf("Id: %d | Nom: %s | Prenom: %s | Maillot: %d | Age: %d | Poste: %s | Buts: %d\n",
                   Equipes[i].id, Equipes[i].nom, Equipes[i].prenom,
                   Equipes[i].numMaillot, Equipes[i].age,
                   Equipes[i].poste, Equipes[i].buts);
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
        printf("1. Rechercher un joueur par Identifiant\n");
        printf("2. Rechercher un joueur par Nom\n");
        printf("0. Retour au menu principal\n");
        printf("Votre choix : ");
        scanf("%d",&choix);
        switch(choix){
            case 1: SearchById(); break;
            case 2: SearchByNom(); break;
            case 0: break;
            default: printf("Choix invalide !\n");
        }
    } while(choix!=0);
}
// === Statistiques === 
void TotalJoueur(){
    printf("Total joueurs dans l equipe : %d\n", nbrJoueur);
}
void AgeMoyen(){
    if(nbrJoueur==0){
        printf("Aucun joueur dans l equipe.\n");
        return;
    }
    int somme=0;
    for(int i=0; i<nbrJoueur; i++){
        somme =somme+Equipes[i].age;
    }
    int moyen = somme/nbrJoueur;
    printf("L age moyen des joueurs est : %d\n", moyen);
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
void meilleurButteur(){
    if(nbrJoueur==0){
        printf("Aucun joueur !\n");
        return;
    }
    int max=Equipes[0].buts;
    int pos=0;
    for(int i=1; i<nbrJoueur; i++){
        if(Equipes[i].buts > max){
            max = Equipes[i].buts;
            pos=i;
        }
    }
    printf("Meilleur buteur : %s %s | Buts:%d\n",
           Equipes[pos].nom, Equipes[pos].prenom, Equipes[pos].buts);
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
void statistique(){
    int choix;
    do{
        printf("\n=== Menu Statistiques ===\n");
        printf("1. Afficher le nombre total de joueurs\n");
        printf("2. Afficher l age moyen des joueurs\n");
        printf("3. Afficher les joueurs ayant marqué plus de X buts\n");
        printf("4. Afficher le meilleur buteur\n");
        printf("5. Afficher le joueur le plus jeune et le plus age\n");
        printf("0. Retour\n");
        printf("Votre choix :");
        scanf("%d",&choix);
        switch(choix){
            case 1: TotalJoueur(); break;
            case 2: AgeMoyen(); break;
            case 3: PlusButs(); break;
            case 4: meilleurButteur(); break;
            case 5: JoueurAgeJeune(); break;
            case 0: break;
            default: printf("Choix invalide !\n");
        }
    }while(choix!=0);
}
// === Main ===
int main() {
    int choix;
    do {
        printf("\n===== Gestion d'une Equipe de Football =====\n");
        printf("1. Ajouter joueur\n");
        printf("2. Afficher joueurs\n");
        printf("3. Modifier joueur\n");
        printf("4. Supprimer un joueur\n");
        printf("5. Rechercher un joueur\n");
        printf("6. Statistiques\n");
        printf("0. Quitter\n");
        printf("Votre choix :");
        scanf("%d", &choix);
        switch (choix) {
            case 1: ajoutJoueur(); break;
            case 2:affichageJouers(); break;
            case 3: Modification(); break;
            case 4: supprimerJoueur(); break;
            case 5: recherche(); break;
            case 6: statistique(); break;
            case 0: printf("Au revoir !\n"); break;
            default: printf("Choix invalide.\n");
        }
    } while (choix != 0);
    return 0;
}