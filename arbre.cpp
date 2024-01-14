#include "main.hpp"
#include "arbre.hpp"

template <class T>
Noeud<T>::Noeud(const T &elm)
{
    info=elm;
    fils_d=fils_g=NULL;
    niveau=0;
}
template <class T>
Noeud<T>::~Noeud()
{
    fils_d=fils_d=NULL;
}

template <class T>
void Noeud<T>::affichage_graphique(Noeud<T> *arbre,int tab)
{
    if(arbre)//si l'arbre existe
    {
        //appel recursive sur le sous arbre droit
        affichage_graphique(arbre->fils_d,tab+1);
        cout<<endl;
        for(int i=0;i<=tab;i++) cout<<"\t";
        cout<<arbre->info<<"(nv:"<<arbre->niveau<<")";
        //Appel recursive sur le sous arbre gauche
        affichage_graphique(arbre->fils_g,tab+1);
    }
}

template <class T>
Noeud<T> *Noeud<T>::Inserer(Noeud<T> *arbre, T elm,int niv)
{
    if(!arbre) 
    {
        Noeud<T> *Nvnoeud = new Noeud<T>(elm);
        Nvnoeud->niveau=niv;
        return ((Noeud<T>*)Nvnoeud);
    }
    if(arbre->info <= elm) 
    {
        niv++;
        arbre->fils_d=Inserer(arbre->fils_d,elm,niv);
    }
    else 
    {
        niv++;
        arbre->fils_g=Inserer(arbre->fils_g,elm,niv);
    }
    return arbre;
}



