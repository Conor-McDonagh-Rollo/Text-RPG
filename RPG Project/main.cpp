#include "General.h"

savegame game;
adventures adventure;
battles battle;
shop sh;
//global definitions
player pl;
shopkeeper sk;
inventory inv;

int main() {

	game.load();
	
}

void main::acceptLoad(std::string _playerName, int _playerLevel)
{

	//assign the saved variables to the global variables
	pl.playerName = _playerName;
	pl.playerLevel = _playerLevel;
	std::cout << "Loaded save file successfuly!\n";
	system("Pause");
	mainMenu(); //start the game
}

void main::mainMenu()
{
	
	//main menu loop
	system("CLS");
	int ans;
	std::cout << "\nWelcome to Generic Text RPG!\nName: " << pl.playerName << "\nLevel: " << pl.playerLevel << std::endl;
	std::cout << "\n1) Adventure\n2) Explore\n3) Inventory\n4) Shop\n5) Quit\n\n" << pl.playerName << ": ";
	std::cin >> ans;
	switch (ans) {

	case 1:
		//do adventure stuff
		break;
	case 2:
		//do exploring stuff
		break;
	case 3:
		//do inventory stuff
		break;
	case 4:
		sh.shopMenu();
		break;
	case 5:
		exit(0);
		break;
	}
	mainMenu();
}
