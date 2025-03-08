
#include <iostream>
#include <string>
#include "Player.hpp"


int main() {

	Player player_1("Player_1", 100, 15);
	Player player_2("Player_2", 100, 20);
	Player player_3("Player_3", 150, 10);

	player_1.attack(player_3);
	player_2.attack(player_3);
	player_3.attack(player_2);
	
	player_2.attack(player_3);
	player_2.attack(player_3);
	player_2.attack(player_3);
	player_2.attack(player_3);
	player_2.attack(player_3);

	return 0;
}