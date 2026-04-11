#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:

    // Function to get user input
    void input()
    {
        cout<<"Enter x coordinate: ";
        cin>>x;
        cout<<"Enter y coordinate: ";
        cin>>y;
    }

    // Binary operator +
    Point operator + (Point p)
    {
        Point temp;
        temp.x = x + p.x;
        temp.y = y + p.y;
        return temp;
    }

    // Binary operator -
    Point operator - (Point p)
    {
        Point temp;
        temp.x = x - p.x;
        temp.y = y - p.y;
        return temp;
    }

    // Unary operator ++
    void operator ++ ()
    {
        ++x;
        ++y;
    }

    // Type conversion (object to int)
    operator int()
    {
        return (x + y);
    }

    void display()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
};

int main()
{
    Point p1, p2, p3;

    cout<<"Enter First Point"<<endl;
    p1.input();

    cout<<"Enter Second Point"<<endl;
    p2.input();

    cout<<"Point 1 = ";
    p1.display();

    cout<<"Point 2 = ";
    p2.display();

    // Binary +
    p3 = p1 + p2;
    cout<<"Addition of Points = ";
    p3.display();

    // Binary -
    p3 = p1 - p2;
    cout<<"Subtraction of Points = ";
    p3.display();

    // Unary ++
    ++p1;
    cout<<"After Increment Point1 = ";
    p1.display();

    // Type conversion
    int sum;
    sum = p1;

    cout<<"Type Conversion Result (x+y) = "<<sum;

    return 0;
}

