#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "StationV1.hpp"

struct LineV1
{
        std::string name;
        std::vector<StationV1*> stations;

        LineV1(std::string name);
        void add_station(std::nomStation);
};
