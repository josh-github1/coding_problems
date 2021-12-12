#include <iostream>
#include <sstream>

using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
    public:
    
        // void to_string(int age, string firstName, string lastName, int stand);
        void to_string();
    

        int get_age();
        void set_age(int input1);
        string get_first_name();
        void set_first_name(string input1);
        string get_last_name();
        void set_last_name(string input1);
        int get_standard();
        void set_standard(int input1);
        
    private:
        int age;
        string firstName;
        string lastName;
        int standard;
};

// void Student::to_string(int age, string firstName, string lastName, int stand)
void Student::to_string()
{
    
    stringstream ss;
    
    ss << age << firstName << lastName << standard;
    
    int age_;
    string firstName_;
    string lastName_;
    int stand_;
    
    ss >> age_ >> firstName_ >> lastName_ >> stand_;


    cout << age << "," << firstName << "," << lastName << "," << standard << endl;
    
}

int Student::get_age()
{
    return age;
}

void Student::set_age(int input1)
{
    age = input1;
}

string Student::get_first_name()
{
    return firstName;
}

void Student::set_first_name(string input1)
{
    firstName = input1;
}

string Student::get_last_name()
{
    return lastName;
}

int Student::get_standard()
{
    return standard;
}

void Student::set_standard(int input1)
{
    standard = input1;
}

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
