#include <string>
#include <iostream>
#include <array>
//other cpp files
#include "game.h"
#include "main.h"
using namespace std;

main Main;

void game::Game()
{
    //Home screen
    string ans;
    system("CLS");
    cout << "\nWelcome adventurer! To ConsoleApplication1 the Video Game!\n \n1) Adventure!\n \n2) Shop\n \n3) Inventory\n";
    cout << "\nPlayer: ";
    cin >> ans;

    if (ans == "1" | ans == "adventure") {
        int num = rand() % 10 + 1;
        Main.Adventure(num);
    }
    else if (ans == "2" | ans == "shop") {
        Main.Shop();
    }
    else if (ans == "3" | ans == "inventory") {
        Main.Inventory();
    }
}

void game::received(string inp, int full) {

    if (full == 2) {
        string ans;
        system("CLS");
        cout << "\nYour inventory is currently full!\nType OK to return.\n";
        cout << "\nPlayer: ";
        cin >> ans;

        if (ans != "nothing") {
            Game();
        }
    }

    if (full == 1) {
        string ans;
        system("CLS");
        cout << "\n" << inp << " has been added to your Inventory!\nType OK to return.\n";
        cout << "\nPlayer: ";
        cin >> ans;

        if (ans != "nothing") {
            Game();
        }
    }

    if (full != 1 && full != 2) {
        received(inp, full);
    }

}

//this method will be called from main.Shop()
void game::shop(string type) {

    //give random chest loot
    int ran = rand() % 10 + 1;
    //Find a random item and then give the player the item in main.shopOut()

    if (type == "helmet") {
        if (ran == 1) {
            Main.shopOut("Bronze Helmet", "Helmet");
        }
        else if (ran == 2) {
            Main.shopOut("Chainmail Helmet", "Helmet");
        }
        else if (ran == 3) {
            Main.shopOut("Half Plate Helmet", "Helmet");
        }
        else if (ran == 4) {
            Main.shopOut("Iron Plate Helmet", "Helmet");
        }
        else if (ran == 5) {
            Main.shopOut("Steel Plate Helmet", "Helmet");
        }
        else if (ran == 6) {
            Main.shopOut("Gold Encrusted Helmet", "Helmet");
        }
        else if (ran == 7) {
            Main.shopOut("Dwarf Steel Helmet", "Helmet");
        }
        else if (ran == 8) {
            Main.shopOut("Dragon Bone Helmet", "Helmet");
        }
        else if (ran == 9) {
            Main.shopOut("Daedric Helmet", "Helmet");
        }
        else if (ran == 10) {
            Main.shopOut("DaVinky Helmet", "Helmet");
        }
    }
    else if (type == "chestplate") {
        if (ran == 1) {
            Main.shopOut("Bronze Chestplate", "Chestplate");
        }
        else if (ran == 2) {
            Main.shopOut("Chainmail Chestplate", "Chestplate");
        }
        else if (ran == 3) {
            Main.shopOut("Half Plate Chestplate", "Chestplate");
        }
        else if (ran == 4) {
            Main.shopOut("Iron Plate Chestplate", "Chestplate");
        }
        else if (ran == 5) {
            Main.shopOut("Steel Plate Chestplate", "Chestplate");
        }
        else if (ran == 6) {
            Main.shopOut("Gold Encrusted Chestplate", "Chestplate");
        }
        else if (ran == 7) {
            Main.shopOut("Dwarf Steel Chestplate", "Chestplate");
        }
        else if (ran == 8) {
            Main.shopOut("Dragon Bone Chestplate", "Chestplate");
        }
        else if (ran == 9) {
            Main.shopOut("Daedric Chestplate", "Chestplate");
        }
        else if (ran == 10) {
            Main.shopOut("DaVinky Chestplate", "Chestplate");
        }
    }
    else if (type == "leggings") {
        if (ran == 1) {
            Main.shopOut("Bronze Leggings", "Leggings");
        }
        else if (ran == 2) {
            Main.shopOut("Chainmail Leggings", "Leggings");
        }
        else if (ran == 3) {
            Main.shopOut("Half Plate Leggings", "Leggings");
        }
        else if (ran == 4) {
            Main.shopOut("Iron Plate Leggings", "Leggings");
        }
        else if (ran == 5) {
            Main.shopOut("Steel Plate Leggings", "Leggings");
        }
        else if (ran == 6) {
            Main.shopOut("Gold Encrusted Leggings", "Leggings");
        }
        else if (ran == 7) {
            Main.shopOut("Dwarf Steel Leggings", "Leggings");
        }
        else if (ran == 8) {
            Main.shopOut("Dragon Bone Leggings", "Leggings");
        }
        else if (ran == 9) {
            Main.shopOut("Daedric Leggings", "Leggings");
        }
        else if (ran == 10) {
            Main.shopOut("DaVinky Leggings", "Leggings");
        }
    }
    else if (type == "boots") {
        if (ran == 1) {
            Main.shopOut("Bronze Boots", "Boots");
        }
        else if (ran == 2) {
            Main.shopOut("Chainmail Boots", "Boots");
        }
        else if (ran == 3) {
            Main.shopOut("Half Plate Boots", "Boots");
        }
        else if (ran == 4) {
            Main.shopOut("Iron Plate Boots", "Boots");
        }
        else if (ran == 5) {
            Main.shopOut("Steel Plate Boots", "Boots");
        }
        else if (ran == 6) {
            Main.shopOut("Gold Encrusted Boots", "Boots");
        }
        else if (ran == 7) {
            Main.shopOut("Dwarf Steel Boots", "Boots");
        }
        else if (ran == 8) {
            Main.shopOut("Dragon Bone Boots", "Boots");
        }
        else if (ran == 9) {
            Main.shopOut("Daedric Boots", "Boots");
        }
        else if (ran == 10) {
            Main.shopOut("DaVinky Boots", "Boots");
        }
    }
    else if (type == "weapon") {

    int ran = rand() % 8 + 1;

        if (ran == 1) {
            Main.shopOut("Bronze Sword", "Weapon");
        }
        else if (ran == 2) {
            Main.shopOut("Big Iron Axe", "Weapon");
        }
        else if (ran == 3) {
            Main.shopOut("Steel Battleaxe", "Weapon");
        }
        else if (ran == 4) {
            Main.shopOut("Gold Warhammer", "Weapon");
        }
        else if (ran == 5) {
            Main.shopOut("Dwarven Hammer", "Weapon");
        }
        else if (ran == 6) {
            Main.shopOut("Dragon Slayer Longsword", "Weapon");
        }
        else if (ran == 7) {
            Main.shopOut("Daedric Battleaxe", "Weapon");
        }
        else if (ran == 8) {
            Main.shopOut("DaVinky Sword", "Weapon");
        }
    }
    else {
        
    shop(type);

    }
}

