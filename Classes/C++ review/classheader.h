#include <sstream>
using namespace std;
class Student{
    private:
        int age,standard;
        string first_name, last_name;
    public:
        void set_age(int a);
        void set_standard(int s);
        void set_first_name(string fname);
        void set_last_name(string lname);
        int get_age();
        int get_standard();
        string get_last_name();
        string get_first_name();
        string to_string();

};