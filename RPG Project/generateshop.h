#pragma once
#include <string>

struct generateshop {

	int type = 0;
	std::string name = "";
	int items;
	int cost;
	int depreciation;

	void Generate();

};

extern generateshop gs;