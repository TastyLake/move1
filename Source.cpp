#include <iostream>
#include <vector>
#include "Header.h" // Assume this header file is included
#include <string>



int main() {
	std::vector<std::string> one = { "test_string1", "test_string2" };
	std::vector<std::string> two;
	move_vectors(one, two);
}

