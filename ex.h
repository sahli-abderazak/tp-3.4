#include<stdio.h>
#include<stdlib.h>
typedef struct produit
{
    int code;
    char libelle[20];

}produit;
typedef struct cellule
{
    produit info;
    struct cellule*prec;
    struct cellule*suivant;
}cellule;
typedef cellule* liste;

typedef struct l_produit
{
    cellule*tete;
    cellule*queuee;
}l_produit;
void creer_Liste(l_produit*l);
void saisir_Produit(produit *p);
void afficher_Produit(produit p);
void Ajout_Debut(l_produit *l);
void Affiche_Produits(l_produit l);
void ajout_fin(l_produit *l);
void Supprimer_Fin(L_produit*l);
int nombre_Produits(L_produit*l);
int main()
{
    int ch;
    L_produit l;
    do
    {
        do
        {
            printf("1  : Ajouter un produit en d�but \n  2 : Ajouter un produit en fin  \n  3 : Supprimer le dernier produit \n 4 : Afficher tous les produits \n 5 : Afficher le nombre de produits \n 6 : Trouver un produit \n 7 : Quitter  \n  ");
            printf("donner votre choix :");
            scanf("%d",&ch);
        }
        while((ch<1)||(ch>6));
        switch(ch)
        {
            case 1: Ajout_Debut(l)
            break;
            case 2: ajout_fin(l)
            break;
            case 3: Supprimer_Fin(l)
            break;
            case 4: Affiche_Produits(l)
            break;
            case 5: printf(nombre_Produits(l))
            break;
            default:
                printf("quitter");

        }
    }
    while(choix != 6);
}
