#pragma once
#include <string>
class Weather
{
private:
	string city; //  Киров
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	string weather; // дождь
	double windSpeed; // 4.27
	int clouds; // 100

public:
	Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds) {
		this->city = city;
		this->lon = lon;
		this->lat = lat;
		this->temperature = temperature;
		this->weather = weather;
		this->windSpeed = windSpeed;
		this->clouds = clouds;
	}

	string getCity() {
		return this->city;
	}
	double getLon() {
		return this->lon;
	}
	double getLat() {
		return this->lat;
	}
	double getTemperature() {
		return this->temperature;
	}
	string getWeather() {
		return this->weather;
	}
	double getWindSpeed() {
		return this->windSpeed;
	}
	int getClouds() {
		return this->clouds;
	}

	void showWeather() {
		cout << "Название населенного пункта: " << this->getCity() << endl;
		cout << "Широта: " << this->getLon() << endl;
		cout << "Долгота: " << this->getLat() << endl;
		cout << "Температура: " << this->getTemperature() << endl;
		cout << "Описание погоды: " << this->getWeather() << endl;
		cout << "Скорость ветра: " << this->getWindSpeed() << endl;
		cout << "Облачность: " << this->getClouds() << endl;
	}

	~Weather();
};

