#include <iostream>

int main() {

	int operacao;
	int num1;
	int num2;
	int total;
	std::cout << "+ (1), - (2), x (3), / (4)\n";
	std::cin >> operacao;

	if (operacao == 1) {
		std::cout << "Voce escolheu +. Digite o numero 1: ";
		std::cin >> num1;
		std::cout << "Digite o numero 2: ";
		std::cin >> num2;
		total = num1 + num2;
		std::cout << "Total: " << total;
	}

	else if (operacao == 2) {
		std::cout << "Voce escolheu -. Digite o numero 1: ";
		std::cin >> num1;
		std::cout << "Digite o numero 2: ";
		std::cin >> num2;
		total = num1 - num2;
		std::cout << "Total: " << total;
	}

	else if (operacao == 3) {
		std::cout << "Voce escolheu x. Digite o numero 1: ";
		std::cin >> num1;
		std::cout << "Digite o numero 2: ";
		std::cin >> num2;
		total = num1 * num2;
		std::cout << "Total: " << total;
	}

	else if (operacao == 4) {
		std::cout << "Voce escolheu /. Digite o numero 1: ";
		std::cin >> num1;
		std::cout << "Digite o numero 2: ";
		std::cin >> num2;
		total = num1 / num2;
		std::cout << "Total: " << total;
	}

	return 0;
}
