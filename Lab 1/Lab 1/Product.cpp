#include "Product.h"

Product::Product(uint16_t id, std::string name, float price, uint16_t vat, std::string expDate)
	: m_id{id},
	m_name{name},
	m_price{price},
	m_vat{vat},
	m_expDate{expDate}
{}

Product::Product(uint16_t id, std::string name, float price, uint16_t vat, ProductType productType)
	: m_id{id},
	m_name{name},
	m_price{price},
	m_vat{vat},
	m_productType{productType}
{
	/*m_id = id;
	m_name = name;
	m_price = price;
	m_vat = vat;
	m_productType = productType;*/
}
