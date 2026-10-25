#pragma once
#include <string>
#include <iostream>

struct StationV3
{
    std::string name;
    std::string line_name;
    std::shared_ptr<StationV3> next_station;
    std::weak_ptr<StationV3> previous_station;

    StationV3(std::string name, std::string line_name);
    void to_string()const;
};
