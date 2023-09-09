#include <iostream>

int main()
{
	std::cout << "Digite o numero da operacao: " << '\n';
	std::cout << "1 -> SOMA." << '\n';
	std::cout << "2 -> SUBTRACAO." << '\n';
	std::cout << "3 -> MULTIPLICACAO." << '\n';
	std::cout << "4 -> DIVISAO." << '\n';
	int operacao;
	std::cin >> operacao;
	if (operacao > 4) {
		std::cout << "Operacao invalida.";
	}
	else {
		std::cout << "Digite o primeiro valor." << '\n';
		double valor1;
		std::cin >> valor1;
		std::cout << "Agora digite o segundo valor." << '\n';
		double valor2;
		std::cin >> valor2;
		if (operacao == 1) {
			double soma = valor1 + valor2;
			std::cout << "O resultado da soma eh: " << soma << '\n';
		}
		if (operacao == 2) {
			double subtracao = valor1 - valor2;
			std::cout << "O resultado da subtracao eh: " << subtracao << '\n';
		}
		if (operacao == 3) {
			double multiplicacao = valor1 * valor2;
			std::cout << "O resultado da multiplicacao eh: " << multiplicacao << '\n';
		}
		if (operacao == 4) {
			double divisao = valor1 / valor2;
			std::cout << "O resultado da divisao eh: " << divisao << '\n';
		}

	}
	
	

	return 0;
}