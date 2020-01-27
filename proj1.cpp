#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>
#include<iomanip>

const int CAPACITY = 20;
using namespace std;
#include "Person.h"


void pop(string *xp, string *yp);
void sort(person name[], int count);

int main()
{
	class person names[CAPACITY];
	ifstream infile;
	ofstream outfile;
	string filename;
	int n = 0;

	cout << "Enter the file name you wish to open" << endl;
	cin >> filename;
	infile.open(filename + ".txt");
	outfile.open("Person_New.txt");

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
	sort(names, CAPACITY);
	outfile << right << setw(20) << "first name" << setw(20) << "last name" << setw(20) << "age" << endl;
	for (int i = 0; i < CAPACITY; i++)
	{
		names[i].put(outfile);
	}
	cout << "The file has been created" << endl;

	infile.close();





}
void pop(string *xp, string *yp)
{
	string temp = *xp;
	*xp = *yp;
	*yp = temp;
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
