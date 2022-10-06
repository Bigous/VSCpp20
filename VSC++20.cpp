// VSC++20.cpp: define o ponto de entrada para o aplicativo.
//

#include "VSC++20.h"

import Bigous.Dice;

int main()
{
	std::cout << "Hello CMake." << std::endl;

	for (int i = 0; i < 15; ++i) {
		std::cout << "Rolling the dice for the "
			<< static_cast<int>(i + 1)
			<< " time: "
			<< static_cast<int>(bigous::dice())
			<< std::endl;
	}

	return 0;
}
