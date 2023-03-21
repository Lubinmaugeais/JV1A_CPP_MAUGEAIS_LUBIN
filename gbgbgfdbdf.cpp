#include <iostream>
using namespace std;
#include <string>


/* EXERCICE 1
int main() {

	int maison = 1;
    int chateau = 2;
    int choix = 0;

    cout << "ou souhaitez vous allez ?\n";
    cout << "1 - maison 2 - chateau\n";
    cin >> choix;
    if (choix == 1) cout << "vous allez a la maison \n";
    if (choix == 2) cout << "vous allez au chateau \n";
 

 }
 */
/* EXERCICE 2
int main() {

    string maison = "maison";
    string chateau = "chateau";
    string choix  ;

    cout << "ou souhaitez vous allez ?\n";
    cout << "ecrivez soit maison soit  chateau\n";
    cin >> choix;
    if (choix == maison) cout << "vous allez a la maison \n";
    if (choix == chateau) cout << "vous allez au chateau \n";
}*/

//EXERCICE 3
class Lieux {
private:


    string nom;
    string description;
    string difficulte;
    
public:
    Lieux (string nom,string description,string difficulte){
        string nom = nom;
        string description = description;
        string difficulte = difficulte;
    }


};
int main()
{
    string choix;
    Lieux lieux1,lieux2,lieux3;
    cout << "ou souhaitez vous allez ?\n";
    cout << "ecrivez soit lieux1 soit  lieux soit lieux3\n";
    cin >> choix;
    if (choix == "lieux1") cout << "vous allez a la maison mais elle est fermé "\n";
    if (choix == "lieux2") cout << "vous allez au chateau il est gigantesque \n";
    if (choix == "lieux3") cout << "vous aller dans la foret sans lumiere elle est terrifiante \n";
}