#include <iostream>

using namespace std;

int main(){
    // Define variables for income and tax percantage
    int totalIncome;
    double taxRate;

    // Get input from user for the total income and store that value into totalIncome varialbe
    cout <<"Please enter your total income: ";
    cin >> totalIncome;

    // Get input from user for the tax percantage and store that value into taxRate varialbe
    cout <<"Please enter tax rate or percantatge in numbers: ";
    cin >> taxRate;

    // Calculate tax and store it in totalTax variable 
    const double totalTax = totalIncome / 100 * taxRate;

    // Minus totalTax from totalIncome and store it in totalIncomeAfterTaxPaid variable  
    const double totalIncomeAfterTaxPaid = totalIncome - totalTax;

    // Print verything one by one 
    cout << "Total income: $" << totalIncome << endl;
    cout << "Tax rate: " << taxRate << "%" << endl;
    cout << "Total tax: $" << totalTax << endl;
    cout << "Total income afte tax paid: $" << totalIncomeAfterTaxPaid << endl;

    // return 0 in the end
    return 0;
}