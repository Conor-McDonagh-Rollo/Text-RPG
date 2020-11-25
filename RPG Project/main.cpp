#include "General.h"

savegame game;
adventures adventure;
battles battle;
//global definitions
shop sh;
player pl;
shopkeeper sk;
inventory inv;
generateshop gs;

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
		gs.Generate();
		std::cout << gs.items;
		system("Pause");
		sh.shopMenu();
		break;
	case 5:
		exit(0);
		break;
	}
	mainMenu();
}
