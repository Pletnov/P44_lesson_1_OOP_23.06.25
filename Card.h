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
};