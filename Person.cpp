#include<iostream>
#include<cstdlib>
#include<fstream>
#include<string>


using namespace std;
#include "Person.h";


void pop(string *xp, string *yp);
void sort(string name[20], int count);

int main()
{
	class person names[20];
	ifstream infile;
	ofstream outfile;
	string filename;
	string name[20];

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
		names[20].get(infile);
		
	}
	sort(name, 20);

	




}
void pop(string *xp, string *yp)
{
	string temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void sort(string name[20], int count)
{
	int i, j;
	for (i = 0; i < count - 1; i++)
	{
  
		for (j = 0; j < count - i - 1; j++)
		{
			if (name[j] > name[j + 1])
			{
				pop(&name[j], &name[j + 1]);
			}

		}
	}
}
