#include "StationV1.hpp"
using namespace std;

StationV1::StationV1(string name, string line_name){
    this->name = name;             
    this->line_name = line_name;
    next_station = nullptr;
    previous_station = nullptr;
}

string StationV1::to_string() const
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