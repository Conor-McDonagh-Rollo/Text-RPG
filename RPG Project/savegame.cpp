#include "General.h"
#include <fstream>
main m;

std::string playerName;
int playerLevel;

void savegame::save()
{


}

void savegame::load()
{
	std::ifstream reader("Data/Player.dat"); //Try to read data
	if (!reader.fail()) { //If it doesn't fails do...
		reader >> playerName;
		reader >> playerLevel;
		reader.close();
		m.acceptLoad(playerName, playerLevel); //Load the data!
	}
	else { //If it fails do...
		std::cout << "Player Data Not Found!\nCreating new data...";
		create();
	}

}

void savegame::create()
{
	std::ofstream writer("Data/Player.dat"); //create player data...
	std::cout << "\nPlease enter your name: "; //make a username
	std::cin >> playerName;

	playerName.erase(std::remove_if(playerName.begin(), playerName.end(), ::isspace), playerName.end()); //erase white spaces

	writer << playerName << std::endl;
	std::cout << std::endl;
	playerLevel = 1;
	writer << playerLevel << std::endl;
	writer.close();
	load(); //load the newly created data!
}
