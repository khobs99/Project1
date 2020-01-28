/*********************************
 * Person Sorting      Spring 2020     CSC 231
 * Created by Kenneth Hobday
 *********************************/
#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<iomanip>

const int CAPACITY = 20;
using namespace std;

#include "Person.h"

//Names constructor
//Postcondition both first name and last name initialized to zero


person::person()
{
	first_name = "";
	last_name = "";
	age = 0;

}
person::~person()
{
	
}

bool person::get(istream& in)
{
	in >> first_name >> last_name >> age;
	return(in.good());

}
void person::put(ostream& out)
{
	out << first_name << "\t" << last_name << "\t" << age << endl;

}
bool person::operator<(person c1)
{
	if (last_name < c1.last_name)
	{
		return true;
	}
	else if((last_name==c1.last_name) && first_name<c1.first_name)
	{
		return true;
	}
	else if (((last_name == c1.last_name) && (first_name == c1.first_name)) && age < c1.age)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool person::operator>(person c1)
{
	if (last_name > c1.last_name)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool person::operator==(person c1)
{
	if (last_name == c1.last_name)
	{
		return true;
	}
	else
	{
		return false;
	}
}
