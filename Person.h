/*********************************
 * Name header
 * Created by Kenneth Hobday
 *********************************/

#include <iostream>


using namespace std;


class person
{
public:
	person();
	bool get(istream&);
	void put(ostream&);

private:
	int capacity = 0;
	string first_name[20];
	string last_name[20];
	int age[20];



};
