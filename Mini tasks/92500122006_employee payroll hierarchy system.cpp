#include <iostream>
using namespace std;

// -------- Base Class --------
class Employee {
protected:
    string name;
    int id;
    float baseSalary;

public:
    // Constructor
    Employee(string n, int i, float s) {
        name = n;
        id = i;
        baseSalary = s;
    }

    // Display function
    void display() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
    }

    // Virtual function
    virtual void calculateSalary() {
        cout << "Base Salary: " << baseSalary << endl;
    }
};

// -------- Single Inheritance --------
class Manager : public Employee {
    float bonus;

public:
    Manager(string n, int i, float s, float b)
        : Employee(n, i, s) {
        bonus = b;
    }

    void calculateSalary() {
        cout << "Total Salary (Manager) = "
             << baseSalary + bonus << endl;
    }
};

// -------- Hierarchical Inheritance --------
class Developer : public Employee {
    float overtime;

public:
    Developer(string n, int i, float s, float ot)
        : Employee(n, i, s) {
        overtime = ot;
    }

    void calculateSalary() {
        cout << "Total Salary (Developer) = "
             << baseSalary + overtime << endl;
    }
};

class HR : public Employee {
    float allowance;

public:
    HR(string n, int i, float s, float a)
        : Employee(n, i, s) {
        allowance = a;
    }

    void calculateSalary() {
        cout << "Total Salary (HR) = "
             << baseSalary + allowance << endl;
    }
};

// -------- Main Function --------
int main() {
    int choice;
    char again;

    do {
        cout << "\n===== Employee Payroll System =====\n";
        cout << "1. Manager\n";
        cout << "2. Developer\n";
        cout << "3. HR\n";
        cout << "Enter your choice: ";
        cin >> choice;

        string name;
        int id;
        float salary;

        cout << "\nEnter Employee Name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter Employee ID: ";
        cin >> id;

        cout << "Enter Base Salary: ";
        cin >> salary;

        if (choice == 1) {
            float bonus;
            cout << "Enter Bonus: ";
            cin >> bonus;

            Manager m(name, id, salary, bonus);
            cout << "\n--- Manager Details ---\n";
            m.display();
            m.calculateSalary();
        }
        else if (choice == 2) {
            float overtime;
            cout << "Enter Overtime Pay: ";
            cin >> overtime;

            Developer d(name, id, salary, overtime);
            cout << "\n--- Developer Details ---\n";
            d.display();
            d.calculateSalary();
        }
        else if (choice == 3) {
            float allowance;
            cout << "Enter Allowance: ";
            cin >> allowance;

            HR h(name, id, salary, allowance);
            cout << "\n--- HR Details ---\n";
            h.display();
            h.calculateSalary();
        }
        else {
            cout << "Invalid choice!\n";
        }

        cout << "\nDo you want to enter another employee? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\nProgram Ended.\n";
    return 0;
}
