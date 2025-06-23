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

int Card::getNumber()
{
	return number;
}

const char* Card::getName()
{
	return name;
}

const char* Card::getExpiredDate()
{
	return expiredDate;
}

int Card::getPIN()
{
	return PIN;
}

double Card::getCash()
{
	return cash;
}

void Card::setPIN(int old_PIN, int new_PIN)
{
	if (PIN == old_PIN)
		PIN = new_PIN;
	else
	{
		cout << "Error\n";
	}
}

void Card::setName(const char* new_name)
{
	if (strlen(new_name) < 3)
		cout << "Too short name\n";
	else {
		delete[] name;
		int size = strlen(new_name) + 1;
		name = new char[size];
		strcpy_s(name, size, new_name);
	}

}

void Card::setExpiredDate(const char* new_ExpiredDate)
{
	if (strlen(new_ExpiredDate) != 5)
	{
		cout << "Invaild data\n";
	}
	else
	{
		strcpy_s(expiredDate, 6, new_ExpiredDate);
	}
}
