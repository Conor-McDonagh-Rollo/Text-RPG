#include "General.h"
savegame game;
adventures adventure;
battles battle;
inventory inv;
shop sh;
//declare the global variables
std::string playerName;
int playerLevel;

int main() {

	game.load();
	
}

void main::acceptLoad(std::string _playerName, int _playerLevel)
{
	//assign the saved variables to the global variables
	playerName = _playerName;
	playerLevel = _playerLevel;
	std::cout << "Loaded save file successfuly!\n";
	system("Pause");
	mainMenu(); //start the game
}

void main::mainMenu()
{
	//main menu loop
	system("CLS");
	int ans;
	std::cout << "\nWelcome to Generic Text RPG!\nName: " << playerName << "\nLevel: " << playerLevel << std::endl;
	std::cout << "\n1) Adventure\n2) Explore\n3) Inventory\n4) Shop\n5) Quit\n\n" << playerName << ": ";
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
		//do shop stuff
		break;
	case 5:
		exit(0);
		break;
	}
	mainMenu();
}
