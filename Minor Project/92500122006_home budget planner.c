#include <iostream>
using namespace std;
// -------- Inline Function --------
inline float calculateSavings(float
 income, float expense) {
  return income - expense;
}
// -------- Function Overloading --------
float add(float a, float b) {
  return a + b;
}
float add(float a, float b, float c) {
return a + b + c;
}
float add(float a, float b, float c, float d) {
 return a + b + c + d;
}
// -------- Pass by Reference Function --------
void checkStatus(float &savings) {
   if (savings < 0)
 cout << "Status: You are in Loss!" << endl;
  else if (savings == 0)
 cout << "Status: No Savings This Month." << endl;    else
 cout << "Status: Good! You saved money." << endl;
}
// -------- Class --------
class Budget {
Private:
 float income;
   float rent, emi1, emi2;
 float grocery, food, currentBill, waterBill, gasBill;
   float totalExpense, savings;
Public::
   // Constructor
    Budget() {
  income = rent = emi1 = emi2 = grocery = food = 0;
   currentBill = waterBill = gasBill = 0;
   totalExpense = savings = 0;
   }
// Input Function
  void inputData() {
  cout << "Enter Monthly Income: ";
       cin >> income;
 cout << "Enter House Rent: ";
    cin >> rent;
   cout << "Enter EMI 1: ";
    cin >> emi1;
     cout << "Enter EMI 2: ";
      cin >> emi2;
    cout << "Enter Grocery Expense: ";
    cin >> grocery;
    cout << “Enter Food Expense: “;
     cin >> food;
   cout << "Enter Current Bill: ";
    cin >> currentBill;
   cout << "Enter Water Bill: ";
   cin >> waterBill;
      cout << "Enter Gas Bill: ";
       cin >> gasBill;
  }
// Calculate Total Expense
   void calculateTotalExpense() {
 float housing = add(rent, emi1, emi2);
       float bills = add(currentBill, waterBill, gasBill);
       totalExpense = add(housing, grocery, bills) + food;
    }
  // Calculate Savings
   void calculateFinalSavings() {
     savings = calculateSavings(income, totalExpense);
    }
    // Display Report
  void displayReport() {
      cout << "\n------ Monthly Budget Report ------" << endl;
      cout << "Income: " << income << endl;
    cout << "Rent: " << rent << endl;
    cout << "EMI 1: " << emi1 << endl;
       cout << "EMI 2: " << emi2 << endl;
     cout << "Grocery: " << grocery << endl;
      cout << “Food: “ << food << endl;
      cout << "Current Bill: " << currentBill << endl;
      cout << "Water Bill: " << waterBill << endl;
cout << "Gas Bill: " << gasBill << endl;
cout << "-----------------------------------" << endl;
  cout << "Total Expense: " << totalExpense << endl;
cout << "Savings: " << savings << endl;
 checkStatus(savings);
   }
 // Extra Function: Expense Percentage
  void expensePercentage() {
     float percent = (totalExpense / income) * 100;
        cout << "Expense Percentage: " << percent << "%" << endl;
   }
};
// -------- Main Function --------
int main() {
   Budget b;   // Object Creation
   b.inputData();
  b.calculateTotalExpense();
  b.calculateFinalSavings();
    b.displayReport();
 b.expensePercentage();
   return 0;
}
