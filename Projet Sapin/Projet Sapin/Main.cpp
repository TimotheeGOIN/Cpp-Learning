
#include <iostream>

int main() {

	// initialiser les valeurs 
	unsigned fir_size = 0;
	const char fir_customization = '*';
	const int fir_min_size = 5;
	const int fir_max_size = 25;

	// demander la taille du sapin à l'utilisateur
	std::cout << "Entrez la taille du sapin comprise entre " << fir_min_size << " et " << fir_max_size << " inclus : ";
	std::cin >> fir_size;
	std::cout << std::endl;

	// vérifier que la taille du sapin est conforme
	if (fir_size < fir_min_size || fir_size > fir_max_size) {
		std::cout << "La taille du sapin doit être comprise entre " << fir_min_size << " et " << fir_max_size << " inclus !" << std::endl;
		std::cerr << "Fin du programme...";
		return -1;
	}

	// afficher chaque ligne qui constituent la sapin
	for (int i = 0; i < fir_size; ++i) {

		// afficher les espaces avant les feuilles du sapin
		for (int j = 0; j < fir_size - 1 - i; ++j) {
			std::cout << " ";
		}

		// afficher les feuilles du sapin
		for (int k = 0; k < i * 2 + 1; ++k) {
			std::cout << fir_customization;
		}

		std::cout << std::endl;
	}


	return 0;

}
