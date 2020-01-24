/*********************************
 * Names code
 *  Created by Kenneth Hobday       01/23/2020
 *********************************/

#include<iostream>
#include<string>
#include<fstream>
#include<cstdlib>


using namespace std;

#include "Person.h"

//Names constructor
//Postcondition both first name and last name initialized to zero


person::person()
{
	first_name[20] = "";
	last_name[20] = "";

}

bool person::get(istream& in)
{
	in >> first_name[20] >> last_name[20] >> age[20];
	return(in.good());

}
void person::put(ostream &out)
{
	out << first_name[20] << last_name[20] << age[20];
}
