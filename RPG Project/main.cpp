#include "General.h"
savegame game;

int main() {

	game.load();

}

void main::acceptLoad(std::string playerName, int playerLevel)
{
	std::cout << playerName << std::endl;
	std::cout << playerLevel << std::endl;
	system("Pause");
}
