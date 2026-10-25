#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "StationV3.hpp"

struct LineV3
{
    std::string name;
    std::vector<std::shared_ptr<StationV3>> stations;
    void add_station(std::string nomStation);
};
