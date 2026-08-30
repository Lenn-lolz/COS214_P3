#include "ProductBooth.h"

ProductBooth::ProductBooth(EventClass* subject, string name, int boothNumber, string product, double productPrice) {
	// TODO - implement ProductBooth::ProductBooth
	throw "Not yet implemented";
}

ProductBooth::ProductBooth(ProductBooth& booth) {
	// TODO - implement ProductBooth::ProductBooth
	throw "Not yet implemented";
}

ProductBooth* ProductBooth::clone() {
	// TODO - implement ProductBooth::clone
	throw "Not yet implemented";
}

string ProductBooth::getName() {
	return this->name;
}

void ProductBooth::setName(string name) {
	this->name = name;
}

int ProductBooth::getBoothNumber() {
	return this->boothNumber;
}

void ProductBooth::setBoothNumber(int boothNumber) {
	this->boothNumber = boothNumber;
}

string ProductBooth::getProduct() {
	return this->product;
}

void ProductBooth::setProduct(string product) {
	this->product = product;
}

void ProductBooth::cookingFood() {
	// TODO - implement ProductBooth::cookingFood
	throw "Not yet implemented";
}

double ProductBooth::getProductPrice() {
	return this->productPrice;
}

void ProductBooth::setProductPrice(double productPrice) {
	this->productPrice = productPrice;
}
