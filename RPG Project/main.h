#pragma once
#include <string>

struct main {

	std::string playerName;
	int playerLevel;

	void acceptLoad(std::string _playerName, int _playerLevel);
	void mainMenu();

};