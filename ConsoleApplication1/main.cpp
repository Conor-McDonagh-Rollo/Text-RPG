#include <iostream>
#include <array>
#include <windows.h>
#include <shellapi.h>
#include "game.h"
#include "main.h"
#include "battle.h"
using namespace std;

game Game;
battle Battle;
int money = 100;
string equipment[5] = {"Leather Boots", "Leather Leggings", "Leather Chestplate", "Leather Helmet", "Rusty Shortsword"};
string invBoots[10] = {"Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty"};
string invLeggings[10] = { "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty" };
string invChestplate[10] = { "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty" };
string invHelmet[10] = { "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty" };
string invWeapon[10] = { "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty" };

//Death screen

int Death(string cause) {

    system("CLS");
    cout << "You have died because of " + cause + "...\n";
    ShellExecute(0, 0, L"https://i.kym-cdn.com/entries/icons/mobile/000/029/198/Dark_Souls_You_Died_Screen_-_Completely_Black_Screen_0-2_screenshot.jpg", 0, 0, SW_SHOW);
    system("Pause");
    return 0;
}

// ADVENTURES

void main::Adventure(int adv) {
    int AC = 0; //set defaults
    int ATCK = 1;
    int numCom = rand() % 19 + 1;
    int numUn = rand() % 6 + 1;
    int numRare = rand() % 5 + 1;

    //check for AC & ATCK

    if (equipment[0] == "Leather Boots") {
        AC += 1;
    }
    else if (equipment[0] == "Bronze Boots") {
        AC += 2;
    }
    else if (equipment[0] == "Chainmail Boots") {
        AC += 3;
    }
    else if (equipment[0] == "Half Plate Boots") {
        AC += 4;
    }
    else if (equipment[0] == "Iron Plate Boots") {
        AC += 5;
    }
    else if (equipment[0] == "Steel Plate Boots") {
        AC += 6;
    }
    else if (equipment[0] == "Gold Encrusted Boots") {
        AC += 7;
    }
    else if (equipment[0] == "Dwarf Steel Boots") {
        AC += 8;
    }
    else if (equipment[0] == "Dragon Bone Boots") {
        AC += 9;
    }
    else if (equipment[0] == "Daedric Boots") {
        AC += 10;
    }
    else if (equipment[0] == "DaVinky Boots") {
        AC += 11;
    }


    if (equipment[1] == "Leather Leggings") {
        AC += 1;
    }
    else if (equipment[1] == "Bronze Leggings") {
        AC += 2;
    }
    else if (equipment[1] == "Chainmail Leggings") {
        AC += 3;
    }
    else if (equipment[1] == "Half Plate Leggings") {
        AC += 4;
    }
    else if (equipment[1] == "Iron Plate Leggings") {
        AC += 5;
    }
    else if (equipment[1] == "Steel Plate Leggings") {
        AC += 6;
    }
    else if (equipment[1] == "Gold Encrusted Leggings") {
        AC += 7;
    }
    else if (equipment[1] == "Dwarf Steel Leggings") {
        AC += 8;
    }
    else if (equipment[1] == "Dragon Bone Leggings") {
        AC += 9;
    }
    else if (equipment[1] == "Daedric Leggings") {
        AC += 10;
    }
    else if (equipment[1] == "DaVinky Leggings") {
        AC += 11;
    }


    if (equipment[2] == "Leather Chestplate") {
        AC += 1;
    }
    else if (equipment[2] == "Bronze Chestplate") {
        AC += 2;
    }
    else if (equipment[2] == "Chainmail Chestplate") {
        AC += 3;
    }
    else if (equipment[2] == "Half Plate Chestplate") {
        AC += 4;
    }
    else if (equipment[2] == "Iron Plate Chestplate") {
        AC += 5;
    }
    else if (equipment[2] == "Steel Plate Chestplate") {
        AC += 6;
    }
    else if (equipment[2] == "Gold Encrusted Chestplate") {
        AC += 7;
    }
    else if (equipment[2] == "Dwarf Steel Chestplate") {
        AC += 8;
    }
    else if (equipment[2] == "Dragon Bone Chestplate") {
        AC += 9;
    }
    else if (equipment[2] == "Daedric Chestplate") {
        AC += 10;
    }
    else if (equipment[2] == "DaVinky Chestplate") {
        AC += 11;
    }



    if (equipment[3] == "Leather Helmet") {
        AC += 1;
    }
    else if (equipment[3] == "Bronze Helmet") {
        AC += 2;
    }
    else if (equipment[3] == "Chainmail Helmet") {
        AC += 3;
    }
    else if (equipment[3] == "Half Plate Helmet") {
        AC += 4;
    }
    else if (equipment[3] == "Iron Plate Helmet") {
        AC += 5;
    }
    else if (equipment[3] == "Steel Plate Helmet") {
        AC += 6;
    }
    else if (equipment[3] == "Gold Encrusted Helmet") {
        AC += 7;
    }
    else if (equipment[3] == "Dwarf Steel Helmet") {
        AC += 8;
    }
    else if (equipment[3] == "Dragon Bone Helmet") {
        AC += 9;
    }
    else if (equipment[3] == "Daedric Helmet") {
        AC += 10;
    }
    else if (equipment[3] == "DaVinky Helmet") {
        AC += 11;
    }


    if (equipment[4] == "Rusty Shortsword") {
        ATCK += 1;
    }
    else if (equipment[4] == "Bronze Sword") {
        ATCK += 2;
    }
    else if (equipment[4] == "Big Iron Axe") {
        ATCK += 3;
    }
    else if (equipment[4] == "Steel Battleaxe") {
        ATCK += 4;
    }
    else if (equipment[4] == "Gold Warhammer") {
        ATCK += 5;
    }
    else if (equipment[4] == "Dwarven Hammer") {
        ATCK += 6;
    }
    else if (equipment[4] == "Dragon Slayer Longsword") {
        ATCK += 7;
    }
    else if (equipment[4] == "Daedric Battleaxe") {
        ATCK += 8;
    }
    else if (equipment[4] == "DaVinky Sword") {
        ATCK += 9;
    }
    else if (equipment[4] == "DaVinky Sword") {
        ATCK += 10;
    }
    else if (equipment[4] == "Maths Skreeeeeee") {
        ATCK += 11;
    }

    //Choose Encounter

    if (adv >= 1 && adv <= 6) {
        Battle.index(AC, ATCK, numCom, "Common");
    }
    else if (adv >= 7 && adv <= 9) {
        Battle.index(AC, ATCK, numUn, "Uncommon");
    }
    else if (adv == 10) {
        Battle.index(AC, ATCK, numRare, "Rare");
    }

}

// INVENTORY

/*
equipment[5]
0 = boots
1 = leggings
2 = chestplate 
3 = helm
4 = weapon
*/

void main::Inventory() {

    string ans;
    system("CLS");

    cout << "\nWelcome adventurer! To the Inventory\n \n1) Helmet\n \n2) Chestplate\n \n3) Leggings\n \n4) Boots\n \n5) Weapon\n \n";
    cout << "\n\nType back to return.\n\n";
    cout << "\nPlayer: ";
    cin >> ans;
    if (ans == "back" | ans == "b") {
        Game.Game();
    }

    if (ans == "1" | ans == "helmet") {
        system("CLS");
        cout << "\nWelcome adventurer! To the Inventory\n \nCurrently equipped: " + equipment[3] + "\n";
        cout << "\n1)" + invHelmet[0];
        cout << "\n2)" + invHelmet[1];
        cout << "\n3)" + invHelmet[2];
        cout << "\n4)" + invHelmet[3];
        cout << "\n5)" + invHelmet[4];
        cout << "\n6)" + invHelmet[5];
        cout << "\n7)" + invHelmet[6];
        cout << "\n8)" + invHelmet[7];
        cout << "\n9)" + invHelmet[8];
        cout << "\n10)" + invHelmet[9];
        cout << "\n\nType back to return.\n\n";
        cout << "\nPlayer: ";
        cin >> ans;
        if (ans == "back" | ans == "b") {
            Inventory();
        }
        if (ans == "1") {
            string temp;
            temp = equipment[3];
            equipment[3] = invHelmet[0];
            invHelmet[0] = temp;
            Inventory();
        }
        else if (ans == "2") {
            string temp;
            temp = equipment[3];
            equipment[3] = invHelmet[1];
            invHelmet[1] = temp;
            Inventory();
        }
        else if (ans == "3") {
            string temp;
            temp = equipment[3];
            equipment[3] = invHelmet[2];
            invHelmet[2] = temp;
            Inventory();
        }
        else if (ans == "4") {
            string temp;
            temp = equipment[3];
            equipment[3] = invHelmet[3];
            invHelmet[3] = temp;
            Inventory();
        }
        else if (ans == "5") {
            string temp;
            temp = equipment[3];
            equipment[3] = invHelmet[4];
            invHelmet[4] = temp;
            Inventory();
        }
        else if (ans == "6") {
            string temp;
            temp = equipment[3];
            equipment[3] = invHelmet[5];
            invHelmet[5] = temp;
            Inventory();
        }
        else if (ans == "7") {
            string temp;
            temp = equipment[3];
            equipment[3] = invHelmet[6];
            invHelmet[6] = temp;
            Inventory();
        }
        else if (ans == "8") {
            string temp;
            temp = equipment[3];
            equipment[3] = invHelmet[7];
            invHelmet[7] = temp;
            Inventory();
        }
        else if (ans == "9") {
            string temp;
            temp = equipment[3];
            equipment[3] = invHelmet[8];
            invHelmet[8] = temp;
            Inventory();
        }
        else if (ans == "10") {
            string temp;
            temp = equipment[3];
            equipment[3] = invHelmet[9];
            invHelmet[9] = temp;
            Inventory();
        }

    }
    else if (ans == "2" | ans == "chestplate") {
        system("CLS");
        cout << "\nWelcome adventurer! To the Inventory\n \nCurrently equipped: " + equipment[2] + "\n";
        cout << "\n1)" + invChestplate[0];
        cout << "\n2)" + invChestplate[1];
        cout << "\n3)" + invChestplate[2];
        cout << "\n4)" + invChestplate[3];
        cout << "\n5)" + invChestplate[4];
        cout << "\n6)" + invChestplate[5];
        cout << "\n7)" + invChestplate[6];
        cout << "\n8)" + invChestplate[7];
        cout << "\n9)" + invChestplate[8];
        cout << "\n10)" + invChestplate[9];
        cout << "\n\nType back to return.\n\n";
        cout << "\nPlayer: ";
        cin >> ans;
        if (ans == "back" | ans == "b") {
            Inventory();
        }
        if (ans == "1") {
            string temp;
            temp = equipment[2];
            equipment[2] = invChestplate[0];
            invChestplate[0] = temp;
            Inventory();
        }
        else if (ans == "2") {
            string temp;
            temp = equipment[2];
            equipment[2] = invChestplate[1];
            invChestplate[1] = temp;
            Inventory();
        }
        else if (ans == "3") {
            string temp;
            temp = equipment[2];
            equipment[2] = invChestplate[2];
            invChestplate[2] = temp;
            Inventory();
        }
        else if (ans == "4") {
            string temp;
            temp = equipment[2];
            equipment[2] = invChestplate[3];
            invChestplate[3] = temp;
            Inventory();
        }
        else if (ans == "5") {
            string temp;
            temp = equipment[2];
            equipment[2] = invChestplate[4];
            invChestplate[4] = temp;
            Inventory();
        }
        else if (ans == "6") {
            string temp;
            temp = equipment[2];
            equipment[2] = invChestplate[5];
            invChestplate[5] = temp;
            Inventory();
        }
        else if (ans == "7") {
            string temp;
            temp = equipment[2];
            equipment[2] = invChestplate[6];
            invChestplate[6] = temp;
            Inventory();
        }
        else if (ans == "8") {
            string temp;
            temp = equipment[2];
            equipment[2] = invChestplate[7];
            invChestplate[7] = temp;
            Inventory();
        }
        else if (ans == "9") {
            string temp;
            temp = equipment[2];
            equipment[2] = invChestplate[8];
            invChestplate[8] = temp;
            Inventory();
        }
        else if (ans == "10") {
            string temp;
            temp = equipment[2];
            equipment[2] = invChestplate[9];
            invChestplate[9] = temp;
            Inventory();
        }
    }
    else if (ans == "3" | ans == "leggings") {
    system("CLS");
    cout << "\nWelcome adventurer! To the Inventory\n \nCurrently equipped: " + equipment[1] + "\n";
    cout << "\n1)" + invLeggings[0];
    cout << "\n2)" + invLeggings[1];
    cout << "\n3)" + invLeggings[2];
    cout << "\n4)" + invLeggings[3];
    cout << "\n5)" + invLeggings[4];
    cout << "\n6)" + invLeggings[5];
    cout << "\n7)" + invLeggings[6];
    cout << "\n8)" + invLeggings[7];
    cout << "\n9)" + invLeggings[8];
    cout << "\n10)" + invLeggings[9];
    cout << "\n\nType back to return.\n\n";
    cout << "\nPlayer: ";
    cin >> ans;
    if (ans == "back" | ans == "b") {
        Inventory();
    }
    if (ans == "1") {
        string temp;
        temp = equipment[1];
        equipment[1] = invLeggings[0];
        invLeggings[0] = temp;
        Inventory();
    }
    else if (ans == "2") {
        string temp;
        temp = equipment[1];
        equipment[1] = invLeggings[1];
        invLeggings[1] = temp;
        Inventory();
    }
    else if (ans == "3") {
        string temp;
        temp = equipment[1];
        equipment[1] = invLeggings[2];
        invLeggings[2] = temp;
        Inventory();
    }
    else if (ans == "4") {
        string temp;
        temp = equipment[1];
        equipment[1] = invLeggings[3];
        invLeggings[3] = temp;
        Inventory();
    }
    else if (ans == "5") {
        string temp;
        temp = equipment[1];
        equipment[1] = invLeggings[4];
        invLeggings[4] = temp;
        Inventory();
    }
    else if (ans == "6") {
        string temp;
        temp = equipment[1];
        equipment[1] = invLeggings[5];
        invLeggings[5] = temp;
        Inventory();
    }
    else if (ans == "7") {
        string temp;
        temp = equipment[1];
        equipment[1] = invLeggings[6];
        invLeggings[6] = temp;
        Inventory();
    }
    else if (ans == "8") {
        string temp;
        temp = equipment[1];
        equipment[1] = invLeggings[7];
        invLeggings[7] = temp;
        Inventory();
    }
    else if (ans == "9") {
        string temp;
        temp = equipment[1];
        equipment[1] = invLeggings[8];
        invLeggings[8] = temp;
        Inventory();
    }
    else if (ans == "10") {
        string temp;
        temp = equipment[1];
        equipment[1] = invLeggings[9];
        invLeggings[9] = temp;
        Inventory();
    }
    }
    else if (ans == "4" | ans == "boots") {
    system("CLS");
    cout << "\nWelcome adventurer! To the Inventory\n \nCurrently equipped: " + equipment[0] + "\n";
    cout << "\n1)" + invBoots[0];
    cout << "\n2)" + invBoots[1];
    cout << "\n3)" + invBoots[2];
    cout << "\n4)" + invBoots[3];
    cout << "\n5)" + invBoots[4];
    cout << "\n6)" + invBoots[5];
    cout << "\n7)" + invBoots[6];
    cout << "\n8)" + invBoots[7];
    cout << "\n9)" + invBoots[8];
    cout << "\n10)" + invBoots[9];
    cout << "\n\nType back to return.\n\n";
    cout << "\nPlayer: ";
    cin >> ans;
    if (ans == "back" | ans == "b") {
        Inventory();
    }
    if (ans == "1") {
        string temp;
        temp = equipment[0];
        equipment[0] = invBoots[0];
        invBoots[0] = temp;
        Inventory();
    }
    else if (ans == "2") {
        string temp;
        temp = equipment[0];
        equipment[0] = invBoots[1];
        invBoots[1] = temp;
        Inventory();
    }
    else if (ans == "3") {
        string temp;
        temp = equipment[0];
        equipment[0] = invBoots[2];
        invBoots[2] = temp;
        Inventory();
    }
    else if (ans == "4") {
        string temp;
        temp = equipment[0];
        equipment[0] = invBoots[3];
        invBoots[3] = temp;
        Inventory();
    }
    else if (ans == "5") {
        string temp;
        temp = equipment[0];
        equipment[0] = invBoots[4];
        invBoots[4] = temp;
        Inventory();
    }
    else if (ans == "6") {
        string temp;
        temp = equipment[0];
        equipment[0] = invBoots[5];
        invBoots[5] = temp;
        Inventory();
    }
    else if (ans == "7") {
        string temp;
        temp = equipment[0];
        equipment[0] = invBoots[6];
        invBoots[6] = temp;
        Inventory();
    }
    else if (ans == "8") {
        string temp;
        temp = equipment[0];
        equipment[0] = invBoots[7];
        invBoots[7] = temp;
        Inventory();
    }
    else if (ans == "9") {
        string temp;
        temp = equipment[0];
        equipment[0] = invBoots[8];
        invBoots[8] = temp;
        Inventory();
    }
    else if (ans == "10") {
        string temp;
        temp = equipment[0];
        equipment[0] = invBoots[9];
        invBoots[9] = temp;
        Inventory();
    }
    }
    else if (ans == "5" | ans == "weapon") {
    system("CLS");
    cout << "\nWelcome adventurer! To the Inventory\n \nCurrently equipped: " + equipment[4] + "\n";
    cout << "\n1)" + invWeapon[0];
    cout << "\n2)" + invWeapon[1];
    cout << "\n3)" + invWeapon[2];
    cout << "\n4)" + invWeapon[3];
    cout << "\n5)" + invWeapon[4];
    cout << "\n6)" + invWeapon[5];
    cout << "\n7)" + invWeapon[6];
    cout << "\n8)" + invWeapon[7];
    cout << "\n9)" + invWeapon[8];
    cout << "\n10)" + invWeapon[9];
    cout << "\n\nType back to return.\n\n";
    cout << "\nPlayer: ";
    cin >> ans;
    if (ans == "back" | ans == "b") {
        Inventory();
    }
    if (ans == "1") {
        string temp;
        temp = equipment[4];
        equipment[4] = invWeapon[0];
        invWeapon[0] = temp;
        Inventory();
    }
    else if (ans == "2") {
        string temp;
        temp = equipment[4];
        equipment[4] = invWeapon[1];
        invWeapon[1] = temp;
        Inventory();
    }
    else if (ans == "3") {
        string temp;
        temp = equipment[4];
        equipment[4] = invWeapon[2];
        invWeapon[2] = temp;
        Inventory();
    }
    else if (ans == "4") {
        string temp;
        temp = equipment[4];
        equipment[4] = invWeapon[3];
        invWeapon[3] = temp;
        Inventory();
    }
    else if (ans == "5") {
        string temp;
        temp = equipment[4];
        equipment[4] = invWeapon[4];
        invWeapon[4] = temp;
        Inventory();
    }
    else if (ans == "6") {
        string temp;
        temp = equipment[4];
        equipment[4] = invWeapon[5];
        invWeapon[5] = temp;
        Inventory();
    }
    else if (ans == "7") {
        string temp;
        temp = equipment[4];
        equipment[4] = invWeapon[6];
        invWeapon[6] = temp;
        Inventory();
    }
    else if (ans == "8") {
        string temp;
        temp = equipment[4];
        equipment[4] = invWeapon[7];
        invWeapon[7] = temp;
        Inventory();
    }
    else if (ans == "9") {
        string temp;
        temp = equipment[4];
        equipment[4] = invWeapon[8];
        invWeapon[8] = temp;
        Inventory();
    }
    else if (ans == "10") {
        string temp;
        temp = equipment[4];
        equipment[4] = invWeapon[9];
        invWeapon[9] = temp;
        Inventory();
    }
    }
    Inventory();
}

// SHOP


void main::shopOut(string out, string typeOut) {
    if (typeOut == "Helmet") {

        for (int i = 0; i < 11; i++) {

            if (i >= 10) {
                Game.received("", 2);
            }

            if (invHelmet[i] == "Empty") {
                money -= 100;
                invHelmet[i] = out;
                Game.received(out, 1);
            }
        }
    } 
    else if (typeOut == "Chestplate") {

        for (int i = 0; i < 11; i++) {

            if (i >= 10) {
                Game.received("", 2);
            }

            if (invChestplate[i] == "Empty") {
                money -= 100;
                invChestplate[i] = out;
                Game.received(out, 1);
            }
        }
    }
    else if (typeOut == "Leggings") {

        for (int i = 0; i < 11; i++) {

            if (i >= 10) {
                Game.received("", 2);
            }

            if (invLeggings[i] == "Empty") {
                money -= 100;
                invLeggings[i] = out;
                Game.received(out, 1);
            }
        }
    }
    else if (typeOut == "Boots") {

        for (int i = 0; i < 11; i++) {

            if (i >= 10) {
                Game.received("", 2);
            }

            if (invBoots[i] == "Empty") {
                money -= 100;
                invBoots[i] = out;
                Game.received(out, 1);
            }
        }
    }
    else if (typeOut == "Weapon") {

        for (int i = 0; i < 11; i++) {

            if (i >= 10) {
                Game.received("", 2);
            }

            if (invWeapon[i] == "Empty") {
                money -= 100;
                invWeapon[i] = out;
                Game.received(out, 1);
            }
        }
    }
    else if (typeOut != "Weapon" && typeOut != "Boots" && typeOut != "Leggings" && typeOut != "Chestplate" && typeOut != "Helmet") {
        Shop();
    }
}

void main::Shop() {

    string ans;
    system("CLS");

    cout << "\nWelcome adventurer! To the Shop... Your balance is " << money << "\n \n1) New Helmet - 100G\n \n2) New Chestplate - 100G\n \n3) New Leggings - 100G\n \n4) New Boots - 100G\n \n5) New Weapon - 100G\n \n";
    cout << "\n\nType back to return.\n\n";
    cout << "\nPlayer: ";
    cin >> ans;
    if (ans == "back" | ans == "b") {
        Game.Game(); 
    }

    //Send to the shop function of the Game script

    if (ans == "1" && money >= 100) {
        Game.shop("helmet");
    }
    else if (ans == "2" && money >= 100) {
        Game.shop("chestplate");
    }
    else if (ans == "3" && money >= 100) {
        Game.shop("leggings");
    }
    else if (ans == "4" && money >= 100) {
        Game.shop("boots");
    }
    else if (ans == "5" && money >= 100) {
        Game.shop("weapon");
    }
}



// PAGES


void Scene1() {

    string ans;
    system("CLS");
    cout << "A dragon appears before you!\nType KILL to slay the dragon!\nYou will be typing as fast as you can in a real battle!\n";
    cout << "\nPlayer: ";
    cin >> ans;

    if (ans == "KILL" | ans == "kill") {
        cout << "You plunge your holy sword into the dragon...\nThe beast falls to the ground lifeless...";
        system("Pause");
        Game.Game();
    }
    else {
        Death("dragon"); //call the dragon death
    }

}

void start() {

    system("CLS");
    string ans;
    cout << "Hello Adventurer!\nCan you understand me? y/n \n \nOr type SKIP to skip.\n";
    cout << "\nPlayer: ";
    cin >> ans;
    if (ans == "skip" | ans == "SKIP" | ans == "Skip") {
        Game.Game();
    }
    //cheats
    if (ans == "money") {
        money = 9999999999;
        start();
    }
    else {
        if (ans == "y" | ans == "yes") {
            cout << "Great! Then we can start your adventure!\n";
            system("Pause");
            Scene1();
        }
        else {
            cout << "It doesn't seem like you understand!\nTry again!";
            system("Pause");
            start();
        }
    }

}

//Initialization

int main()
{
    start();
    return 0;
}