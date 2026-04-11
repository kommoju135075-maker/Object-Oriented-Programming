#include <iostream>
#include <vector>
#include <stdexcept>
using namespace std;

// Function Template to process data (generic)
template <typename T>
T processData(T value) {
    if (value < 0) {
        throw invalid_argument("Negative values are not allowed!");
    }
    return value * value; // simple processing (square)
}

// Class Template
template <typename T>
class SafeDataProcessor {
private:
    vector<T> data;

public:
    void addData(T value) {
        try {
            T processed = processData(value);
            data.push_back(processed);
            cout << "Processed value stored: " << processed << endl;
        }
        catch (invalid_argument &e) {
            cout << "Error: " << e.what() << endl;
        }
    }

    void displayData() {
        cout << "\nStored Values in Vector:\n";
        for (T val : data) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    SafeDataProcessor<int> processor;
    int n, value;

    cout << "Enter number of values: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i + 1 << ": ";
        cin >> value;

        try {
            if (cin.fail()) {
                throw runtime_error("Invalid input! Please enter integer.");
            }
            processor.addData(value);
        }
        catch (runtime_error &e) {
            cout << "Error: " << e.what() << endl;
            cin.clear();
            cin.ignore(1000, '\n');
        }
    }

    processor.displayData();

    return 0;
}
