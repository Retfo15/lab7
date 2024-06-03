#pragma once
#include "Service.h"
#include "pugixml.hpp"
#include "pugiconfig.hpp"
#include <iostream>

using namespace pugi;

class XmlService : public Service {
public:
	Weather getWeather(std::string s) override;
	~XmlService() override {};
};