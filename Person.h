/*********************************
 * Bushel header
 * Created by Kenneth Hobday
 *********************************/

#include <iostream>
using namespace std;
int const CAPACITY = 20;
class person
{
public:
    person();
    bool get(istream&);

private:
    int capacity = 0;
    string first_name[CAPACITY];
    string last_name[CAPACITY];
    int age[CAPACITY];
    


};
