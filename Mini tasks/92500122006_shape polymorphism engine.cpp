#include <iostream>
using namespace std;

// Abstract Base Class
class Shape {
public:
    virtual void area() = 0;
    virtual void perimeter() = 0;

    virtual ~Shape() {
        cout << "Shape destructor called\n";
    }
};

// Circle Class
class Circle : public Shape {
    float radius;
public:
    Circle(float r) {
        radius = r;
    }

    void area() override {
        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }

    void perimeter() override {
        cout << "Perimeter of Circle = " << 2 * 3.14 * radius << endl;
    }

    ~Circle() {
        cout << "Circle destructor called\n";
    }
};

// Rectangle Class
class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() override {
        cout << "Area of Rectangle = " << length * width << endl;
    }

    void perimeter() override {
        cout << "Perimeter of Rectangle = " << 2 * (length + width) << endl;
    }

    ~Rectangle() {
        cout << "Rectangle destructor called\n";
    }
};

int main() {
    char choice;

    do {
        Shape* shape;
        int option;

        cout << "\nSelect Shape:\n1. Circle\n2. Rectangle\nEnter choice: ";
        cin >> option;

        if (option == 1) {
            float r;
            cout << "Enter radius: ";
            cin >> r;
            shape = new Circle(r);
        }
        else if (option == 2) {
            float l, w;
            cout << "Enter length and width: ";
            cin >> l >> w;
            shape = new Rectangle(l, w);
        }
        else {
            cout << "Invalid choice\n";
            continue;
        }

        shape->area();
        shape->perimeter();

        delete shape;

        cout << "\nDo you want to continue? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Program ended.\n";
    return 0;
}
