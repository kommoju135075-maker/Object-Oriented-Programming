#include <iostream>
#include <fstream>
using namespace std;

void writeData() {
    ofstream fout("data.txt");   // open file directly

    if (!fout) {
        cout << "Error opening file!\n";
        return;
    }

    int n, id;
    string name;   // use string (no errors like char array)

    cout << "Enter number of records: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEnter ID: ";
        cin >> id;
        cout << "Enter Name: ";
        cin >> name;

        fout << id << " " << name << endl;
    }

    fout.close();
    cout << "\nData written successfully!\n";
}

void readData() {
    ifstream fin("data.txt");

    if (!fin) {
        cout << "Error opening file!\n";
        return;
    }

    int id;
    string name;

    cout << "\n--- Stored Data ---\n";

    while (fin >> id >> name) {
        cout << "ID: " << id << " Name: " << name << endl;
    }

    fin.close();
}

int main() {
    int choice;

    do {
        cout << "\n=== Safe Data Process Utility ===\n";
        cout << "1. Write Data\n";
        cout << "2. Read Data\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            writeData();
        }
        else if (choice == 2) {
            readData();
        }
        else if (choice == 3) {
            cout << "Exiting program...\n";
        }
        else {
            cout << "Invalid choice!\n";
        }

    } while (choice != 3);

    return 0;
}
