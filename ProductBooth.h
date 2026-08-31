/**
 * @brief Concrete leaf and concrete observer that implements ProductBooth functionality
 * 
 * Maintains ref to subject being observed.
 */

#ifndef PRODUCTBOOTH_H
#define PRODUCTBOOTH_H

#include "EventUnit.h"
using namespace std;

class ProductBooth : public EventUnit
{

private:
	string name;
	int boothNumber;
	string product;
	bool cooking;
	double productPrice;
	EventControl *subject;

public:
	ProductBooth(EventControl *subject, string name, int boothNumber, string product, double productPrice);
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

	void open();
	void close();
	int getCapacity();
	void reportStatus();
	void clean();
};

#endif