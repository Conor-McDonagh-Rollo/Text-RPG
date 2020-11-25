#include "General.h"
#include <fstream>
main m;

std::string loadPlayerName;
int loadPlayerLevel;

void savegame::save()
{


}

void savegame::load()
{
	std::ifstream reader("Data/Player.dat"); //Try to read data
	if (!reader.fail()) { //If it doesn't fails do...
		reader >> loadPlayerName;
		reader >> loadPlayerLevel;
		reader.close();
		m.acceptLoad(loadPlayerName, loadPlayerLevel); //Load the data!
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
	std::cin >> loadPlayerName;

	loadPlayerName.erase(std::remove_if(loadPlayerName.begin(), loadPlayerName.end(), ::isspace), loadPlayerName.end()); //erase white spaces

	writer << loadPlayerName << std::endl;
	std::cout << std::endl;
	loadPlayerLevel = 1;
	writer << loadPlayerLevel << std::endl;
	writer.close();
	load(); //load the newly created data!
}
