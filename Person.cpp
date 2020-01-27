#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>
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

bool person::get(ifstream& in)
{
    in >> first_name >> last_name >> age;
    return(in.good());

}
void person::put(ofstream &out)
{
    out << right << first_name << setw(30) << last_name << setw(30) << age <<endl;
}
