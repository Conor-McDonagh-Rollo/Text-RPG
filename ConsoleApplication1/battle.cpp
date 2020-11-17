#include <ctime> //measure time
#include <iostream> 
#include <windows.h>
#include <shellapi.h>
#include <array>
//other cpp files
#include "battle.h"
#include "game.h"
#include "main.h"

using namespace std;

/*
	AC: Armour Class (roll higher to hit)
	ATK: Player's attack strength
	enemy: Which enemy do we encounter?
	rarity: What rarity of enemy do we encounter?
*/

void battle::index(int AC, int ATK, int enemy, string rarity) 
{

	clock_t begin = clock(); //begin timer
	string input;

	cout << "\nType: Hey you, you're finally awake!\n";
	cin >> input;

	clock_t end = clock(); //end timer
	int elapsed_secs = int(end - begin) / CLOCKS_PER_SEC; //Get elapsed time
	cout << elapsed_secs; //print time it took to type
	system("Pause");
}
