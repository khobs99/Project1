#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>

const int CAPACITY=20;
using namespace std;

#include "Person.h"

//Names constructor
//Postcondition both first name and last name initialized to zero


person::person()
{
    first_name[CAPACITY] = "";
    last_name[CAPACITY] = "";
    age[CAPACITY]=0;

}

bool person::get(istream& in)
{
    in >> first_name[CAPACITY] >> last_name[CAPACITY] >> age[CAPACITY];
    return(in.good());

}
void person::put(ostream &out)
{
    out << first_name[CAPACITY] << last_name[CAPACITY] << age[CAPACITY];
}
