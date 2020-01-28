/*********************************
 * Name header
 * Created by Kenneth Hobday
 *********************************/




using namespace std;


class person
{
public:
	person();
	bool get(istream&);
	void put(ostream&);
	bool operator <(person c1);
	bool operator>(person c1);
private:
	int capacity = 0;
	string first_name;
	string last_name;
	int age;



};
