#include "main.hpp"
#include "arbre.cpp"

int main()
{
    Noeud<int> arbre1(10);
    int nv=0;
    arbre1.Inserer(&arbre1,20,nv);
    arbre1.Inserer(&arbre1,55,nv);
    arbre1.Inserer(&arbre1,6,nv);
    arbre1.Inserer(&arbre1,80,nv);
    arbre1.Inserer(&arbre1,13,nv);
    arbre1.Inserer(&arbre1,5,nv);
    arbre1.Inserer(&arbre1,7,nv);
    arbre1.Inserer(&arbre1,2,nv);
    arbre1.Inserer(&arbre1,0,nv);
    arbre1.Inserer(&arbre1,1,nv);
    arbre1.Inserer(&arbre1,14,nv);
    arbre1.Inserer(&arbre1,12,nv);
    arbre1.affichage_graphique(&arbre1,3);
}