#pragma once
#include<iostream>
#include<cstring>
using namespace std;
class Student
{
	char name[100];
	int mark;

public:
	Student(); //Конструктор за замовчуванням
	Student(const char* name, int mark); //Конструктор з параметрами
	~Student(); //Деструктор

	void showInfo(); //Прототип
	void setMark(int user_mark);
	int getMark();
};