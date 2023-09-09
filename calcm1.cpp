#include <iostream>

int main()
{
	std::cout << "Type the operation number : " << '\n';
	std::cout << "1 -> ADITION." << '\n';
	std::cout << "2 -> SUBTRACTION." << '\n';
	std::cout << "3 -> MULTIPLICATION." << '\n';
	std::cout << "4 -> DIVISION." << '\n';
	int operation;
	std::cin >> operation;
	if (operation > 4) {
		std::cout << "Invalid operation.";
	}
	else {
		std::cout << "Type the first operand." << '\n';
		double value1;
		std::cin >> value1;
		std::cout << "Type the second operand." << '\n';
		double value2;
		std::cin >> value2;
		if (operation == 1) {
			double sum = value1 + value2;
			std::cout << value1 << " + " << value2 << " = " << sum << '\n';
		}
		if (operation == 2) {
			double subtraction = value1 - value2;
			std::cout << value1 << " - " << value2 <<" = " << subtraction << '\n';
		}
		if (operation == 3) {
			double multiplication = value1 * value2;
			std::cout << value1 << " * " << value2 << " = " << multiplication << '\n';
		}
		if (operation == 4) {
			double division = value1 / value2;
			std::cout << value1 << " / " << value2 << " = " << division << '\n';
		}

	}
	return 0;
}