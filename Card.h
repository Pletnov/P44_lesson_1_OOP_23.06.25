#pragma once
#include<iostream>
#include<cstring>
#include<ctime>
#include<cstdlib>
using namespace std;
class Card
{
	int number;
	char* name;
	char expiredDate[6];
	int PIN;
	double cash;
public:
	Card();
	Card(const char* user_name);
	~Card();
	void showInfo();

	int getNumber();
	const char* getName();
	const char* getExpiredDate();
	int getPIN();
	double getCash();

	void setPIN(int old_PIN, int new_PIN);
	void setName(const char* new_name);
	void setExpiredDate(const char* new_ExpiredDate);
};