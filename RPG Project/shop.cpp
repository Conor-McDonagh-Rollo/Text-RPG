//Shop.cpp : For the Console Application
//

#include "General.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include "Shopkeeper.h"//Need to find a option online for it
#include "Player.h"//Need to find a option online
#include "stdaxx.h"//Need to find online


int main()
{
	Player player; //The player
	Shopkeeper shopkeeper; //The shop Keeper

	int response; //Menu Navagation
	std::cout << "Hi" << Player.name() << ". Here's my selection of goods." << "\n";
	std::cout << "1: Purchase Items. 2: Sell Items. 3: List your items. 4: Show gold. 5: Exit" << "\n";

	do
	{
		std::cin >> response;

		switch (response)

		{
		case 1:
			shopkeeper.PurchaseItem(player);
			break;

		case 2:
			shopkeeper.SellItem(player);
			break;

		case 3:
			player.ListInventory();
			break;

		case 4:
			std::cout << "you have" << player.GetGold() << "gold coins." << "gold coins." << "\n";
			break;

		case 5:
			std::cout << "Thank you for shopping." << "\n";
			break;

		default:
			std::cout << "please enter vaild data. " << "\n";
			std::cout << "1: Purchase Items. 2: Sell Items. 3: List Your Items. 4: Show Gold. 5: Exit" << "\n";
		}

		std::cout << "1: Purchase Items. 2: Sell Items. 3: List Your Items. 4: Show Gold. 5: Exit" << "\n";

	} while (response != 5);

	\*
		//This could work or Fail extremely
		Player.Additem("Mace", 30);
	player.ListInventory();
	std::cout << player.GetGold();
	*/

		//Keep window open
		std::string barn;
	std::cin >> barn;
	return 0;
}
				 




