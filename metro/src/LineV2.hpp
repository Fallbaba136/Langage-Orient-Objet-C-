#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "StationV2.hpp"

struct LineV2
{
        std::string name;
        std::vector<StationV2*> stations;

        LineV2(std::string name);
        void add_station(std::nomStation);
};
