#ifndef PRODUCTBOOTH_H
#define PRODUCTBOOTH_H

#include "EventUnit.h"

class ProductBooth : public EventUnit
{

private:
	string name;
	int boothNumber;
	EventControl *subject;
	string product;
	bool open;
	bool cooking;
	double productPrice;

public:
	ProductBooth(EventControl *subject, string name, int boothNumber, string product, double productPrice);
	ProductBooth(ProductBooth &booth);
	~ProductBooth();
	ProductBooth *clone();
	string getName();
	void setName(string name);
	int getBoothNumber();
	void setBoothNumber(int boothNumber);
	string getProduct();
	void setProduct(string product);
	void cookingFood();
	double getProductPrice();
	void setProductPrice(double productPrice);

	void update(Notice notification);
	void onUpdateBoolean(string notice, bool notification);
	void onUpdateString(string notice, string notification);
};

#endif