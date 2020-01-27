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
	bool get(ifstream&);
	void put(ofstream&);
	bool operator <(person c1);
	bool operator>(person c1);
private:
	int capacity = 0;
	string first_name;
	string last_name;
	int age;



};
