#include "LineV1.hpp"
using namespace std;

LineV1::LineV1(string name){
    this->name = name;
}

void LineV1::add_station(string nomStation){
    StationV1* nouvelleStation = new StationV1(nomStation, name);
    stations.push_back("nouvelleStation");
}