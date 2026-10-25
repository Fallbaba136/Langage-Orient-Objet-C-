#include "StationV3.hpp"
using namespace std;

StationV3::StationV3(string name, string line_name)
 : name(name), line_name(line_name)
{}

string StationV3::to_string() const
{
    string resultat = "Station: " + name + " (" + line_name + ")";
    if (next_station != nullptr){
        resultat += "-> suivant: " + next_station->name;
    }else{
        resultat += "-> suivant: aucune";
    }
    if (previous_station != nullptr)
    {
        resultat += "-> precedente: " + previous_station->name;
    }else
    {
        resultat += "-> precedente: aucune"; 
    }
    return resultat;
}