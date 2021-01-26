/*==========================================================
Programmeur : Alexandre Tremblay
Fichier     : Ex2.1.cpp
Description : programme de paie d'employ�s
Date        : 2021/01/18
==========================================================*/

#include <iostream>
using namespace std;
int main()
{
    int numHeures = 0;
    double tauxHorraire = 0.0;
    double salaire = 10.00;

    while (true)
    {
        cout << "Entrez le nombre d�heures travaill�es(-1 pour terminer) : ";
        cin >> numHeures;
        
        if (numHeures != -1)
        {
            cout << "Entrez le taux horaire de l�employ�($00.00) : ";
            cin >> tauxHorraire;

            if (numHeures <= 40)
            {
                salaire = numHeures * tauxHorraire;
            }
            else
            {
                salaire = (40.00 * tauxHorraire) + ((numHeures - 40.00f) * (1.5 * tauxHorraire));
            }

            cout << "Le salaire est de $" << salaire << endl;
        }
        else
        {
            return 0;
        } 
    }
}
/*
D�veloppez un programme en C++ qui d�terminera le salaire brut de chacun des employ�s d�une compagnie.
L�entreprise paie le � temps r�gulier � pour les 40 premi�res heures travaill�es par chaque employ� et 
paie le � temps et demi � pour toutes les heures d�passant les 40 heures r�guli�res.

La compagnie vous confie  la  liste  des  employ�s, le  [nombre  d�heures]  travaill�es  par  chaque employ�  la 
semaine  derni�re, ainsi  que  le  [taux  horaire]  de  chaque  employ�.

Votre  programme  doit  entrer  ces  informations  pour  chaque  employ�  et  doit d�terminer et afficher 
le salaire brut de chacun d�entre eux.

AFFICHAGE :
Entrez le nombre d�heures travaill�es(-1 pour terminer) : 39
Entrez le taux horaire de l�employ�($00.00) : 10.00 
Le salaire est de $390.00 

Entrez le nombre d�heures travaill�es(-1 pour terminer) : 40
Entrez le taux horaire de l�employ�($00.00) : 10.00 
Le salaire est de $400.00 

Entrez le nombre d�heures travaill�es(-1 pour terminer) : 41
Entrez le taux horaire de l�employ�($00.00) : 10.00 
Le salaire est de $415.00 

Entrez le nombre d�heures travaill�es(-1 pour terminer) : -1
*/