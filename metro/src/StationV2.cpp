#include "StationV2.hpp"
using namespace std;

StationV2::StationV2(string name, string line_name, StationV2& StationPrecedente)
 : name(name), line_name(line_name), next_station(nullptr), previous_station(StationPrecedente)
{}

string StationV1::to_string() const
{
    StationV2& stationPrecedente;
    string resultat = "Station: " + name + " (" + line_name + ")";
    if (next_station != nullptr){
        resultat += "-> suivant: " + next_station->name;
    }else{
        resultat += "-> suivant: aucune";
    }
    if (previous_station == this)
    {
        resultat += "-> precedente: " + previous_station.name;
    }else
    {
        resultat += "-> precedente: aucune"; 
    }
    return resultat;
}