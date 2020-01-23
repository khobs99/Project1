/*********************************
 * Bushel code
 *  Created by Kenneth Hobday       01/23/2020
 *********************************/

#include<iostream>
using namespace std;

#include "Person.h"

//Names constructor
//Postcondition both first name and last name initialized to zero


person::person()
{
    first_name[CAPACITY] = "";
    last_name[CAPACITY] = "";

}

bool person::get(istream& in)
{
    in >> first_name >> last_name >> age;

}
