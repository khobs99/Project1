#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;
#include "Person.h";

const int CAPACITY = 20;
int main()
{
	class person names[CAPACITY];
	ifstream infile;
	ofstream outfile;
	string filename;
	string name[CAPACITY];

	cin >> filename;
	infile.open(filename+".txt");

	if (infile.fail())
	{
		cout << "The file requested did not open" << endl;
	}


	while (!infile.eof())
	{
		

	}




}
