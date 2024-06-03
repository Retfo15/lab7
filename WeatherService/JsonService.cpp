#include "JsonService.h"
#include <fstream>



Weather JsonService::getWeather(std::string s) {
    std::ifstream fin(s);
    if (!fin)
        throw std::exception("error");

    json j;
    fin >> j;
    //j = json::parse(fin);
    std::string city = j["name"];
    double lon = j["coord"]["lon"]; 
    double lat = j["coord"]["lat"];   
    double temperature = j["main"]["temp"]; 
    std::string weather = j["weather"]["main"];
    double windSpeed = j["wind"]["speed"]; 
    int clouds = j["clouds"]["all"]; 
    return Weather(city, lon, lat, temperature, weather, windSpeed, clouds);
}

JsonService::~JsonService() {}