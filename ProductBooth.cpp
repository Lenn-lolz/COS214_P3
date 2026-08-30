#include "ProductBooth.h"
#include <iostream>
ProductBooth::ProductBooth(EventControl *subject, string name, int boothNumber, string product, double productPrice)
{
	this->subject = subject;
	this->name = name;
	this->boothNumber = boothNumber;
	this->product = product;
	this->productPrice = productPrice;
	this->open = false;
}

ProductBooth::ProductBooth(ProductBooth &booth) : subject(booth.subject), name(booth.name), boothNumber(booth.boothNumber), product(booth.product), productPrice(booth.productPrice)
{
}

ProductBooth *ProductBooth::clone()
{
	ProductBooth *newBooth = new ProductBooth(*this);
	this->subject->attach(newBooth);
	return newBooth;
}

string ProductBooth::getName()
{
	return this->name;
}

void ProductBooth::setName(string name)
{
	this->name = name;
}

int ProductBooth::getBoothNumber()
{
	return this->boothNumber;
}

void ProductBooth::setBoothNumber(int boothNumber)
{
	this->boothNumber = boothNumber;
}

string ProductBooth::getProduct()
{
	return this->product;
}

void ProductBooth::setProduct(string product)
{
	this->product = product;
}

double ProductBooth::getProductPrice()
{
	return this->productPrice;
}

void ProductBooth::setProductPrice(double productPrice)
{
	this->productPrice = productPrice;
}

void ProductBooth::update(Notice notification)
{
	switch (notification)
	{ // implementation based on notification?
	case OPEN:
		open = true;
		break;
	case CLOSE:
		open = false;
		break;
	case EVACUATE:
		break;
	case STAGE_EVENT:
		break;
	case MAX_CAPACITY:
		open = false;
		break;
	}
}

/*if (notice == "sale")
{
	double oldPrice = this->productPrice;
	this->productPrice = oldPrice * (1.0 - std::stoi(notification) / 100.0);
	std::cout << "Booth " + this->name + "'s product of " + this->product + "is on sale! From R" + std::to_string(oldPrice) + " to R" + std::to_string(this->productPrice) + "\n";
}*/
