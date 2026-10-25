#pragma once
#include <string>
#include <iostream>


struct StationV1
{
    std::string name;
    std::string line_name;
    StationV1* next_station;
    StationV1& previous_station;

    StationV2(std::string name, std::string line_name, StationV2& StationPrecedente);
    std::string  to_string() const;
};
