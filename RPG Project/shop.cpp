//Shop.cpp : For the Console Application

#include "General.h"

void shop::shopMenu()
{
	system("CLS");
	int ans; //Menu Navagation
	std::cout << "Hi " << pl.playerName << ". Here's my selection of goods." << "\n";
	std::cout << "1: Purchase Items. 2: Sell Items. 3: List your items. 4: Show gold. 5: Exit" << "\n";

	std::cin >> ans;

	switch (ans)

	{
	case 1:
		sk.purchaseItem();
		break;

	case 2:
		sk.sellItem();
		break;

	case 3:
		inv.listInventory();
		break;

	case 4:
		std::cout << "you have" << pl.gp << "gold coins" << "\n";
		break;

	case 5:
		std::cout << "Thank you for shopping." << "\n";
		break;

	default:
		std::cout << "please enter vaild data. " << "\n";
		system("Pause");
	}

	shopMenu();
} 

	/*
	//This could work or Fail extremely
	inventory.Additem("Mace", 30);
	inventory.ListInventory();
	std::cout << player.GetGold();
	*/





