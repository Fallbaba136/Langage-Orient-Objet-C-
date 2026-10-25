#include "StationV1.hpp"
#include "LineV1.hpp"
#include <iostream>
using namespace std;

int main() {
  std::cout << "Métro" << std::endl;
 //=========== Etape 1 : Intanciation direct StationV1 ===============
  StationV1 laDefense("La Défense", "Ligne 1");
  StationV1 chatelet("Châtelet", "Ligne 1");
  StationV1 Bastille("Bastille", "Ligne 1");
  StationV1 Nation("Nation", "Ligne 1");
  chatelet.next_station = &Bastille;
  Bastille.previous_station = &chatelet;

  StationV1* courant = &chatelet;
  while (courant != nullptr)
  {
    cout << courant->to_string() << endl;
    courant = courant->previous_station;
  }

  LineV1 ligne1("Ligne 1");
  LineV1.add_station("La défense");
  LineV1.add_station("Châtelet");
  LineV1.add_station("Bastille");
  LineV1.add_station("Nation");

  LineV1 ligne2("Ligne 2");
  LineV1.add_station("Etoile");
  LineV1.add_station("Châtelet");
  LineV1.add_station("Gare de Lyon");
  
  return 0;
}
