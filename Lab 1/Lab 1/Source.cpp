#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include "Product.h"

//tema: container variant research(valori de doua tipuri diferite - vers 17).
//tema: creare cont github, instalare smartgit.

int main() {
	std::vector<Product> products;
	
	// while(!fin.eof())
	for (std::ifstream fin("product.prodb"); !fin.eof(); /*empty*/) {
		uint16_t id, vat;
		std::string name, expDateOrType;
		float price;

		if (!fin) {
			std::cout << "File is wrong!\n";
		}
		fin >> id >> name >> price >> vat >> expDateOrType;

		// Product p{ id, name, price, vat, expDateOrType };
		products.emplace_back(id, name, price, vat, expDateOrType);
	}

	return 0;
}