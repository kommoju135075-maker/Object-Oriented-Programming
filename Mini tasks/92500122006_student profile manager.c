#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int roll;
    string branch;
    float marks;

public:

    // Parameterized Constructor
    Student(string n, int r, string b, float m)
    {
        name = n;
        roll = r;
        branch = b;
        marks = m;

        cout << "\nStudent Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << roll << endl;
        cout << "Branch: " << branch << endl;
        cout << "Marks: " << marks << endl;
    }

    // Destructor
    ~Student()
    {
        cout << "\nDestructor Called. Object Destroyed." << endl;
    }
};

int main()
{
    string name, branch;
    int roll;
    float marks;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Branch: ";
    cin >> branch;

    cout << "Enter Marks: ";
    cin >> marks;

    // Passing user input to constructor
    Student s1(name, roll, branch, marks);

    return 0;
}
