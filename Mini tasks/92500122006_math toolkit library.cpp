#include <iostream>
using namespace std;

// Function declarations
int add(int a, int b);
void swapNumbers include (int &x, int &y);
int factorial(int n);

// Overloaded Power Functions
int power(int base);            // Square (base^2)
int power(int base, int exp);   // base^exp
inline int square(int n) {
    return n * n;
}
int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
   cout << "Sum: " << add(num1, num2) << endl;
    cout<< "Before swap: num1 = " << num1 << ", num2 = " << num2 << endl;
    swapNumbers(num1, num2);
    cout << "After swap: num1 = " << num1 << ", num2 = " << num2 << endl;
     int n;
    cout << "Enter a number to calculate factorial: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << factorial(n) << endl;

    // Power Overloading
    int base, exp;
    cout << "Enter base and exponent: ";
    cin >> base >> exp;
    cout<< base << " power 2 is " << power(base) << endl;
    cout << base << " power " << exp << " is " << power(base, exp) << endl;
     return 0;
}

// Function definitions
#
int add(int a, int b) {
    return a + b;
}

void swapNumbers(int &x, int &y) {
    int temp = x;
    x = y;
    y = temp;
}

int factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Power function (square)
int power(int base) {
    return base * base;
}

// Power function (base^exp)
int power(int base, int exp) {
    int result = 1;
    for(int i = 1; i <= exp; i++) {
        result *= base;
    }
    return result;
}
