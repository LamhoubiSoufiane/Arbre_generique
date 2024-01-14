#ifndef SRC_ARBRE_H_
#define SRC_ARBRE_H_


template <class T> class Noeud
{
    private:
        T info;
        int niveau;
        Noeud *fils_g;
        Noeud *fils_d;
    public:
        Noeud(const T &);
        ~Noeud();
        Noeud<T> *Inserer(Noeud<T> *arbre, T elm,int nv);
        void affichage_graphique(Noeud<T> *arbre,int tab);
};

#endif