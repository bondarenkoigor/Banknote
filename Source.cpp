#include<iostream>

using std::string;

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
	int getPrice() { return price; }
	string getCurrency() { return currency; }
	double getHeight() { return height; }
	double getWidth() { return width; }
	double getDurability() { return durability; }
	string getId() { return id; }
	~Banknote() {}
};

int main()
{

}