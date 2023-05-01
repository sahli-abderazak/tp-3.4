#include"ex.h"
void creer_Liste(l_produit*l)
{
    l->tete=NULL;
    l->queuee=NULL;
}
void saisir_Produit(produit *p)
{
    printf("donner le code de produit");
    scanf("%d",&p->code);
    printf("donner libelle de produit");
    scanf("%s",p->libelle);
}
void afficher_Produit(produit p)
{
    printf("le code est %d et libelle %s ",p.code,p.libelle);
}
void Ajout_Debut(l_produit *l)
{
    cellule *nv;
    nv=malloc(sizeof(cellule));
    saisir_Produit(&(nv->info)) ;
    nv->prec=NULL;
    nv->suivant=l->tete;
    if((l->tete)!=NULL)
    {
        l->tete->prec=nv;
    }else
    {
     l->queuee=nv;;
    }
    l->tete=nv;


}
void Affiche_Produits(l_produit l)
{
    cellule * p=l.tete;
    while(p!=NULL)
    {
        afficher_Produit(p->info);
        p=p->suivant;
    }

}
void ajout_fin(l_produit *l)
{
    cellule*nv=malloc(sizeof(cellule));
    saisir_Produit(&(nv->info)) ;
    nv->suivant=NULL;
    nv->prec=l->queuee;
    if(l->queuee!=NULL)
    {
        l->queuee->suivant=nv;

    }else{
  l->tete=nv;
    }
      l->queuee=nv;

}

{
void  Supprimer_Fin(L_produit*l)
{
    cellule*p;
    if(l->tete!=NULL)
    {
        p=l->queuee;
        if(p->prec!= NULL)
        {
            p->prec->suivant=NULL;


        }
        else
        {
            l->tete=NULL;
        }
        l->queuee=p->prec;
        free(p);
    }
}
int nombre_Produits(L_produit*l)
{
   cellule * p=l.tete;
   int nb=0;
    while(p!=NULL)
    {
        nb=nb+1;
        p=p->suivant;
    }
    return nb;
}
