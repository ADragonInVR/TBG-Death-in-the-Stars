#include<iostream>
#include<Windows.h>
using namespace std;

int health = 100; //global variable! all functions can see and use
int monsterhealth = 100;
string inventory[10];


//function declarations
void battlesystem();
int monstergen(); //function declaration


int main() { // game loop!
	srand(time(NULL));
	string input = "west";
	int room = 1;
	int FTrandomizer = 0;

	for (int i = 0; i < 5; i++)
		inventory[i] = " ";

	//for (int i = 0; i<5; i++;)
	//	inventory[i] = " ";
	cout << "Gustronaut are you there wake up ... im turning on your pod I hope you can hear me ... Gustronaut wake up ... Gustronaut" << endl;
	cout << "Gustronaut ... good your awake. Gustronaut i feel kinda weird calling you that do you have a name ... " << endl;
	cout << "                                     .-\"\"\"\"-.                                                                       " << endl;
	cout << "                                    / j      \\                                                                         " << endl;
	cout << "                                   :.d;       ;                                                                         " << endl;
	cout << "                                   $$P        :                                                                         " << endl;
	cout << "                        .m._       $$         :                                                                         " << endl;
	cout << "                       dSMMSSSss.__$$b.    __ :                                                                         " << endl;
	cout << "                      :MMSMMSSSMMMSS$$$b  $$P ;                                                                         " << endl;
	cout << "                      SMMMSMMSMMMSSS$$$$     :b                                                                         " << endl;
	cout << "                     dSMMMSMMMMMMSSMM$$$b.dP SSb.                                                                       " << endl;
	cout << "                    dSMMMMMMMMMMSSMMPT$$=-. /TSSSS.                                                                     " << endl;
	cout << "                   :SMMMSMMMMMMMSMMP  `$b_.'  MMMMSS.                                                                   " << endl;
	cout << "                   SMMMMMSMMMMMMMMM \\  .'\\    :SMMMSSS.                                                               " << endl;
	cout << "                  dSMSSMMMSMMMMMMMM  \\/\\_/; .'SSMMMMSSSm                                                              " << endl;
	cout << "                 dSMMMMSMMSMMMMMMMM     :.;'\' :SSMMMMSSMM;                                                             " << endl;
	cout << "               .MMSSSSSMSSMMMMMMMM;     :.;    MMSMMMMSMMM;                                                             " << endl;
	cout << "              dMSSMMSSSSSSSMMMMMMM;     ;.;    MMMMMMMSMMM                                                              " << endl;
	cout << "             :MMMSSSSMMMSSP^TMMMMM      ;.;    MMMMMMMMMMM                                                              " << endl;
	cout << "ok then ill call you umm Agent Phoenix 47 here is what you need to do. you need to look for some Gas, Hard Drive and the Key Card for us to get out of here" << endl;
	cout << "if you find some thing that can scare out the monster out there then good oh btw there is a monster out there good l" << endl;


	while (input != "q" && health > 0) {//game loop

		//don't spawn in 1, 13-16 
		FTrandomizer = rand() % 10 + 2; //between 2-12

		system("color 02");

		cout << "your inventory: ";
		for (int i = 0; i < 5; i++)//prints the inventory
			cout << inventory[i] << " ";
		cout << endl;
		
		switch (room) {
		case 1:
			cout << "gustronaut you are in the medbay you can go right to the navigation or down to the ship" << endl;
			
			cin >> input;
			if (input == "east" || input == "d")
				room = 2;
			if (input == "down" || input == "s")
				room = 16;

			break;
		case 2:
			if (monstergen() == 1)
				battlesystem();
			cout << "gustronaut you are in the navigation you can go down to communication or left to the medbay" << endl;
			if (FTrandomizer == 2 && inventory[0] != "flamethrower") {
				cout << "I think I can use this to scare off the monster" << endl;
			}
			cin >> input;
			if (input == "west" || input == "a")
				room = 1;
			if (input == "down" || input == "s")
				room = 3;
			if (FTrandomizer == 2) {
				if (input == "grab" || input == "e")
					inventory[0] = "flamethrower";
			}
			break;
		case 3:
			if (monstergen() == 1)
				battlesystem();
			cout << "gustronaut you are in communication you can go up to the brige or down to the beds or left to the navigation" << endl;
			if (FTrandomizer == 3 && inventory[0] != "flamethrower") {
				cout << "I think I can use this to scare off the monster" << endl;
			}
			cin >> input;
			if (input == "west" || input == "a")
				room = 2;
			if (input == "up" || input == "w")
				room = 4;
			if (input == "down" || input == "s")
				room = 7;
			if (FTrandomizer == 3) {
				if (input == "grab" || input == "e")
					inventory[0] = "flamethrower";
			}
			break;
		case 4:
			if (monstergen() == 1)
				battlesystem();
			cout << "gustronaut you are in the brige you can go back down to communication" << endl;
			cout << "the space suit is here" << endl;
			if (FTrandomizer == 4 && inventory[0] != "flamethrower") {
				cout << "I think I can use this to scare off the monster" << endl;
			}
			cin >> input;
			if (input == "down" || input == "s")
				room = 3;
			if (input == "grab" || input == "e") {
				inventory[3] = "Spacesuit";
				cout << "you put on the space suit" << endl;

			}
			if (FTrandomizer == 4 && inventory[0] != "flamethrower") {
				if (input == "grab" || input == "e")
					inventory[0] = "flamethrower";
			}
			break;
		case 5:
			if (monstergen() == 1)
				battlesystem();
			cout << "gustronaut you are in the cafeteria you can go up to the ship or down to suit station stashon or right to the locker room" << endl;
			if (FTrandomizer == 5 && inventory[0] != "flamethrower") {
				cout << "I think I can use this to scare off the monster" << endl;
			}
			cin >> input;
			if (input == "east" || input == "d")
				room = 6;
			if (input == "down" || input == "s")
				room = 8;
			if (input == "up" || input == "w")
				room = 16;
			if (FTrandomizer == 4) {
				if (input == "grab" || input == "e")
					inventory[0] = "flamethrower";
			}
			break;
		case 6:
			if (monstergen() == 1)
				battlesystem();
			if (FTrandomizer == 6 && inventory[0] != "flamethrower") {
				cout << "I think I can use this to scare off the monster" << endl;
			}
			cout << "gustronaut you are in the locker room you can go left to the cafeteria or right to the beds" << endl;
			cout << "there is a flamethrower here" << endl;

			cin >> input;
			if (input == "east" || input == "d")
				room = 7;
			if (input == "west" || input == "a")
				room = 5;
			break;
		case 7:
			cout << "gustronaut you are in the beds you can go up to communication  or left to the locker room" << endl;
			if (FTrandomizer == 7 && inventory[0] != "flamethrower") {
				cout << "I think I can use this to scare off the monster" << endl;
			}
			cin >> input;
			if (input == "up" || input == "w")
				room = 3;
			if (input == "west" || input == "a")
				room = 6;
			if (input == "grab" || input == "e") {
				inventory[0] = "flamethrower";
				cout << "i can use the flamethrower to scare off the monster" << endl;

			}
			break;
		case 8:
			if (monstergen() == 1)
				battlesystem();
			cout << "gustronaut you are in suit station  you can go left to the air lock or up to the cafeteria or right to the reactor" << endl;
			if (FTrandomizer == 8 && inventory[0] != "flamethrower") {
				cout << "I think I can use this to scare off the monster" << endl;
			}
			cin >> input;
			if (input == "up" || input == "w")
				room = 5;
			if (input == "west" || input == "a")
				room = 12;
			if (input == "east" || input == "d")
				room = 9;
			if (input == "grab" || input == "e") {
				inventory[0] = "flamethrower";
				cout << "i can use the flamethrower to scare off the monster" << endl;

			}
			break;
		case 9:
			if (monstergen() == 1)
				battlesystem();
			cout << "gustronaut you are in the reator you can go left to the suit station station or right to the elc" << endl;
			cout << "there is the hard drive here" << endl;
			if (FTrandomizer == 9 && inventory[0] != "flamethrower") {
				cout << "I think I can use this to scare off the monster" << endl;
			}
			cin >> input;
			if (input == "east" || input == "d")
				room = 10;
			if (input == "west" || input == "a")
				room = 8;
			if (input == "grab" || input == "e") {
				inventory[4] = "HardDrive";
				cout << "what is on this that is this important" << endl;

			}
			if (input == "grab" || input == "e") {
				inventory[0] = "flamethrower";
				cout << "i can use the flamethrower to scare off the monster" << endl;

			}
			break;
		case 10:
			if (monstergen() == 1)
				battlesystem();
			cout << "gustronaut you are in the elc you can go left to the eng or down to the reator" << endl;
			if (FTrandomizer == 10 && inventory[0] != "flamethrower") {
				cout << "I think I can use this to scare off the monster" << endl;
			}
			cin >> input;
			if (input == "down" || input == "s")
				room = 9;
			if (input == "west" || input == "a")
				room = 11;
			if (input == "grab" || input == "e") {
				inventory[0] = "flamethrower";
				cout << "i can use the flamethrower to scare off the monster" << endl;

			}
			break;
		case 11:
			if (monstergen() == 1)
				battlesystem();
			cout << "gustronaut you are in the eng you can go back right to elc" << endl;
			cout << "there is some gas here" << endl;
			if (FTrandomizer == 11 && inventory[0] != "flamethrower") {
				cout << "I think I can use this to scare off the monster" << endl;
			}
			cin >> input;
			if (input == "east" || input == "d")
				room = 10;
			if (input == "grab" || input == "e") {
				inventory[1] = "Gas";
				cout << "as long as i dont somehow start a fire i will be fine" << endl;

			}
			if (input == "grab" || input == "e") {
				inventory[0] = "flamethrower";
				cout << "i can use the flamethrower to scare off the monster" << endl;

			}
			break;
		case 12:
			cout << "gustronaut you are in the air lock you can go right to the suit station stashon or up in to space" << endl;
			cin >> input;
			if (input == "east" || input == "d")
				room = 8;
			if (input == "up" || input == "w") {
				if (inventory[3] == "Spacesuit") {
					cout << "i hope the space suit will hold up" << endl;
					room = 13;

				}
				else {
					cout << "gustronaut you will die if you go out there" << endl;

				}
			}
			break;
		case 13:
			cout << "gustronaut you are in space you can go up in to space or down into the air lock" << endl;
			cin >> input;
			if (input == "down" || input == "s")
				room = 12;
			if (input == "up" || input == "w")
				room = 14;
			break;
		case 14:
			cout << "gustronaut you are in space you can go up in to space or down into space" << endl;
			cin >> input;
			if (input == "down" || input == "s")
				room = 13;
			if (input == "up" || input == "w")
				room = 15;
			break;
		case 15:
			cout << "gustronaut you are in space you can go down into space" << endl;
			cout << "there is a keycard here" << endl;

			cin >> input;
			if (input == "down" || input == "s")
				room = 14;
			if (input == "grab" || input == "e") {
				inventory[2] = "KeyCard";
				cout << "you got the KeyCard" << endl;

			}
			break;
		case 16:
		           cout << "gustronaut you are at the ship you can go down to the cafeteria or up to the medby" << endl;
				   cout << "                      `. ___                                            " << endl;
				   cout << "                     __,' __`.                  _..----....____           " << endl;
				   cout << "           __...--.'``;.   ,.   ;``--..__     .', -._    _. -'          " << endl;
				   cout << "     _..-''-------'   `'   `'   `'     O ``-''._(, ; ') _,'            " << endl;
				   cout << "   ,'________________                          \`-._`-','               " << endl;
				   cout << "    `._              ```````````------...___   '-.._'-:                 " << endl;
				   cout << "       ```--.._      ,.                     ````--...__\-.              " << endl;
				   cout << "               `.--. `-`                       ____    |  |`            " << endl;
				   cout << "                 `. `.                       ,'`````.  ;  ;`            " << endl;
				   cout << "                   `._`.        __________   `.      \"__/`             " << endl;
				   cout << "                      `-:._____/______/___/____`.     \  `              " << endl;
				   cout << "                                  |       `._    `.    \                " << endl;
				   cout << "                                  `._________`-.   `.   `.___           " << endl;
				   cout << "                                                     `------'`          " << endl;

			cin >> input;
			if (input == "down" || input == "s")
				room = 5;
			if (input == "up" || input == "w")
				room = 1;
			if (input == "east" || input == "d")
				if (inventory[1] == "Gas" && inventory[2] == "KeyCard" && inventory[4] == "HardDrive") {
					cout << "the gas, Keycard, and the HardDrive is all you need to get out of here" << endl;
					room = 17;

				}
				else {
					cout << "you dont have all the parts yet" << endl;

				}
			break;
		case 17:
			cout << "gustronaut you are in the ship you can" << endl;
			cin >> input;
			
			break;
		} //end swtich
	}//end of game loop
}//end of main

void battlesystem() {
	cout << "battle commencing!" << endl;
	while (health > 0 && monsterhealth > 0) { //keep looping untill you or the monster dies!
		if (inventory[0] == "flamethrower") {
			cout << "the alien gets hit by flamethrower for 10 hp" << endl;
			monsterhealth -= 10; 
			inventory[0] = " ";
			if (monsterhealth <= 0)
				cout << "you killed it how" << endl;
			return;

		}
		else {
			cout << "the alien slash at you for 25 hp" << endl;
			health -= 25;
			cout << health << endl;
			Beep(900, 1000);
			if (health <= 0)
				cout << "gustronaut nooooooooooooooooooooooo" << endl;
			return;
		}
	

	}

	

}


int monstergen() {
	int num = rand() % 100; //random num between 0-99
	if (num < 25) {
		cout << "nothing is here" << endl;
		return 0;
	}
	if (num < 75) {
		cout << "the alien is in the room and it sees you" << endl;
		return 1;
	}
	else {
		cout << " the alien is in the room and it cant see you" << endl;
		return 0;
	}
} 
