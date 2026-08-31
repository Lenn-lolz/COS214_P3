#include "ProductBooth.h"
#include <iostream>
ProductBooth::ProductBooth(EventControl *subject, string name, int boothNumber, string product, double productPrice)
{
	this->subject = subject;
	this->name = name;
	this->boothNumber = boothNumber;
	this->product = product;
	this->productPrice = productPrice;
	this->openUnit = false;
	//this->subject->attach(this);
}


ProductBooth::~ProductBooth(){
	subject->detach(this);
}
void ProductBooth::clean(){
	cleanliness = 100;
	cout << name << " is back to full cleanliness! \n";

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
void ProductBooth::open(){
	this->openUnit = true;
}
void ProductBooth::close(){
	this->openUnit = false;
}
int ProductBooth::getCapacity(){
	return this->capacity;
}
void ProductBooth::reportStatus(){cout << status << "\n";}
void ProductBooth::setProductPrice(double productPrice)
{
	this->productPrice = productPrice;
}
void ProductBooth::cookingFood(){
	cout<<"Food booths started cooking food \n";
}
void ProductBooth::update(Notice notification){
	switch (notification){
		case OPEN:
			/*cleanliness -= 20;
			if (cleanliness < 0){cleanliness =0; }
			if (cleanliness == 0){
				subject->setCleaningTarget(this);
                subject->notify(CLEAN_REQUIRED,"oh brother this guy stinks!");
			}*/

			onUpdateString("sale", "20");
			break;
		case CLOSE:
			//this->open = false;
			close();
			cout << "--Booth closes up \n"; 
			break;
		case EVACUATE:
			onUpdateBoolean("evacuate",false);
			break;
		case MAX_CAPACITY:
			cout << "At max capacity \n";
			break;
		case STAGE_EVENT:
	
			break;
		default:
			cout <<"Not a notification type \n";

	}
}

void ProductBooth::onUpdateBoolean(string notice, bool notification)
{
	if (notice == "evacuate")
	{
		this->openUnit = notification;
		open();
		this->cooking = notification;

		std::cout << "Booth " + this->name + "(BoothNumber: " + std::to_string(this->boothNumber) + ") has closed, no more products will be sold until it opens. \n";
	}
	if (notice == "closing")
	{
		this->openUnit = notification;
		open();
		this->cooking = notification;
		std::cout << "Booth " + this->name + "(BoothNumber: " + std::to_string(this->boothNumber) + ") has closed, no more products will be sold until it opens. \n";
	}
}

void ProductBooth::onUpdateString(string notice, string notification)
{
	if (notice == "sale")
	{
		double oldPrice = this->productPrice;
		this->productPrice = oldPrice * (1.0 - std::stoi(notification) / 100.0);
		std::cout << "Booth " + this->name + "'s product of " + this->product + " is on sale! From R" + std::to_string(oldPrice) + " to R" + std::to_string(this->productPrice) + "\n";
	}
}