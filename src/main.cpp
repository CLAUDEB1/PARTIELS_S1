#include <iostream>
using namespace std;



int main() {
  const float coutHoraire = 4.0;
  int velosDispos = 20;
  int capacite= 20;
  int attache;
  int choix;

  cout << "****** Gestion d'une station Vélô ******" << endl << endl;
  cout << "______________________________" << endl;
  
  cout << "Vélos disponibles : " << velosDispos << endl;
  attache = capacite - velosDispos;
  cout << "Points d'attache disponible : " << attache << endl; 
  
  cout << "______________________________" << endl<<endl;
  cout << "1. Emprunter un vélô électrique" << endl;
  cout << "2. Restituer un vélô électrique" << endl;
  cout << "3. Estimer le coût de location" << endl;
  cout << "4. Quitter l'application" << endl << endl;

  std::cin >> choix;
  cout << "choix de l'utilisateur : " << choix << endl;
  if (choix == 1) {
    cout << " Emprunter un vélô électrique" << endl;
  } else if (choix == 2) {
    cout << " Restituer un vélô électrique" << endl;
  } else if (choix == 3) {
    cout << " Estimer le coût de location" << endl;
  } else if (choix == 4) {
    cout << " Quitter l'application" << endl;
  }
  return 0;
} 