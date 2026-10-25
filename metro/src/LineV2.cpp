#include "LineV2.hpp"
using namespace std;

LineV2::LineV2(string name){
    this->name = name;
}

void LineV2::add_station(string nomStation){
    StationV2* nouvelleStation = new StationV2(nomStation, name);
    stations.push_back("nouvelleStation");
}