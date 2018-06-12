#include <iostream>

#include "utility.h"



//Leave main() alone! THAT MEANS DON'T TOUCH CODE BELOW THIS LINE!!!
int main() {
	std::cout << "Enter a name: ";
	auto name = ReadStringFromConsole();
	std::cout << "Enter an adjective: ";
	auto adjt = ReadStringFromConsole();

	std::cout << DescribePersonAsSomething(name, adjt) << '\n';
	return 0;
}

