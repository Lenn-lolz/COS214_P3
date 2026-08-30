#ifndef PRODUCTBOOTH_H
#define PRODUCTBOOTH_H

class ProductBooth : public EventUnit {

private:
	string name;
	int boothNumber;
	EventClass* subject;
	string product;
	boolean open;
	double productPrice;

public:
	ProductBooth(EventClass* subject, string name, int boothNumber, string product, double productPrice);

	ProductBooth(ProductBooth& booth);

	ProductBooth* clone();

	string getName();

	void setName(string name);

	int getBoothNumber();

	void setBoothNumber(int boothNumber);

	void ~ProductBooth();

	string getProduct();

	void setProduct(string product);

	void cookingFood();

	double getProductPrice();

	void setProductPrice(double productPrice);
};

#endif
