
#include <iostream>
#include <ctime>

int main() {

	// initialiser la graine du générateur d'aléatoire
	std::srand(time(nullptr));

	// initialiser les valeurs 
	const int mystery_number = std::rand() % 100;
	const int max_try = 5;
	int tried_number = 0;
	int distance = 0;

	while (true) {

		// demander au joueur de deviner un nombre
		std::cout << "Tentez de trouver le nombre mystere : ";
		std::cin >> tried_number;
		std::cout << std::endl;

		distance = abs(mystery_number - tried_number);

		if (distance == 0) {
			std::cout << "Bien joue ! Le nombre mystere etait bien " << mystery_number << " !";
			break;
		}
		else if (distance <= 2) {
			std::cout << "Bouillant !" << std::endl;
		}
		else if (distance <= 5) {
			std::cout << "Chaud !" << std::endl;
		}
		else if (distance <= 10) {
			std::cout << "Moyen !" << std::endl;
		}

		else if (distance <= 20) {
			std::cout << "Froid !" << std::endl;
		}
		else {
			std::cout << "Glace !" << std::endl;
		}

	}




	return 0;

}
