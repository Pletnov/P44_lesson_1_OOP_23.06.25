#include "Card.h"

Card::Card()
{
	number = rand() + rand() * 10000;
	name = new char[10] {"Undefined"};
	strcpy_s(expiredDate, 6, "01.35");
	PIN = rand() % 8000 + 1000;
	cash = 0;
}

Card::Card(const char* user_name)
{
	number = rand() + rand() * 10000;
	strcpy_s(expiredDate, 6, "01.35");
	PIN = rand() % 8000 + 1000;
	cash = 0;

	int size = strlen(user_name) + 1;
	name = new char[size];
	strcpy_s(name, size, user_name);
}

Card::~Card()
{
	cout << "Close the card" << endl;
	delete[] name;
}

void Card::showInfo()
{
	cout << "Number card: " << number << endl;
	cout << "Name: " << name << endl;
	cout << "Exp date: " << expiredDate << endl;
	cout << "PIN: " << PIN << endl;
	cout << "Cash: " << cash << endl;
}
