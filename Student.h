#pragma once
#include<iostream>
#include<cstring>
using namespace std;
class Student
{
	char name[100];
	int mark;

public:
	Student(); //����������� �� �������������
	Student(const char* name, int mark); //����������� � �����������
	~Student(); //����������

	void showInfo(); //��������
	void setMark(int user_mark);
	int getMark();
};