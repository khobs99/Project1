#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<iomanip>

const int CAPACITY=20;
using namespace std;

#include "Person.h"

//Names constructor
//Postcondition both first name and last name initialized to zero


person::person()
{
    first_name = "";
    last_name = "";
    age=0;

}

bool person::get(istream& in)
{
    in >> first_name >> last_name >> age;
	return(in.good());

}
void person::put(ostream &out)
{
    out << right << first_name << setw(30) << last_name << setw(30) << age <<endl;
	
}
bool person::operator<(person c1)
{
	if (last_name < c1.last_name)
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
