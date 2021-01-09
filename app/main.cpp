#include <iostream>
#include "Operation.h"

main()
{
	Operation<int> first(12, 23);
	Operation<double> second(23.1, 245.5);
	Operation<double> third(0, 0.4);
	Operation<std::string> fourth("abc", "cde");
	Operation<char> fifth(13, 'c');
	std::cout << first.subtract() << "\n";
	std::cout << second.divide() << "\n";
	std::cout << third.multiply() << "\n";
	std::cout << fourth.add() << "\n";
	std::cout << fifth.add() << "\n";
}
