#include "Student.h"

Student::Student()
{
	strcpy_s(name, 100, "Noname");
	mark = 0;
	cout << "Student() " << name << endl;
}

Student::Student(const char* name, int mark)
{
	strcpy_s(this->name, 100, name);
	this->mark = mark;
	cout << "Student(name, mark) " << name << endl;
}

Student::~Student()
{
	cout << "~Student() " << name << endl;
}

void Student::showInfo()
{
	cout << "Student: " << name << endl;
	cout << "Mark: " << mark << endl;
}

void Student::setMark(int user_mark)
{
	if (user_mark < 0 || user_mark > 12)
		cout << "Error: invalid mark!\n";
	else
	{
		mark = user_mark;
	}
}

int Student::getMark()
{
	return mark;
}
