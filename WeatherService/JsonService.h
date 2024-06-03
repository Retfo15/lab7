#pragma once
class JsonService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~JsonService() {};
};
