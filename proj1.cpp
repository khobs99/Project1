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



void sort(person name[], int count);

int main()
{
	class person names[CAPACITY];
	ifstream infile;
	string filename;
	int n = 0;

	cout << "Enter the file name you wish to open" << endl;
	cin >> filename;
	infile.open(filename + ".txt");

	if (infile.fail())
	{
		cout << "The file requested did not open" << endl;
		exit(1);
	}

	while (!infile.eof())
	{
		names[n].get(infile);
		n++;
	}
	sort(names, n);

	cout <<"\t"<< "first name" <<"\t"<< "last name" <<"\t"<< "age" << endl;

	for (int i = 0; i < n; i++)
	{
		names[i].put(cout);
	}
	cout << "The file has been created" << endl;

	infile.close();





}

void sort(person name[], int count)
{
	int i, j;
	for (i = 0; i < count - 1; i++)
	{

		for (j = 0; j < count - i - 1; j++)
		{
			if (name[j] > name[j + 1])
			{
				swap(name[j], name[j + 1]);
			}

		}
	}
}
