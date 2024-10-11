#pragma once
#include <string>
#include <cstdint>
#include "ProductType.h"

class Product
{
private:
	uint16_t m_id;
	std::string m_name;
	float m_price;
	uint16_t m_vat;
	std::string m_expDate;
	ProductType m_productType;

public:
	Product() = default;
	Product(uint16_t id, std::string name, float price, uint16_t vat, std::string expDate);
	Product(uint16_t id, std::string name, float price, uint16_t vat, ProductType productType);
};

