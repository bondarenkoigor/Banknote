#include<iostream>

using std::string;
using std::cout;

class Banknote
{
private:
	int price;
	string currency;
	double height;
	double width;
	double durability;
	string id;
	int year;
public:
	Banknote(int price, string currency, double height, double width, string id, int year) : price(price), currency(currency), height(height), width(width), durability(100), id(id), year(year) {}
	void lowerDurability()
	{
		if (this->durability > 0) this->durability -= 20;
	}
	int getPrice() { return this->price; }
	string getCurrency() { return this->currency; }
	double getHeight() { return this->height; }
	double getWidth() { return this->width; }
	double getDurability() { return this->durability; }
	string getId() { return this->id; }
	void print()
	{
		cout << "price: " << price << "\tcurrency: " << currency << "\theight: " << height << "\twidth: " << width << "\tid: " << id << "\tyear: " << year << "\n";
	}
	~Banknote() {}
};

int main()
{

}