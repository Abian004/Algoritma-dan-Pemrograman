#include <iostream>
using namespace std;

// Function prototypes
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y, double z);
double divide(double x, double y);

int main() {
  double num1, num2, num3;
  char operation;

  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;
  cout << "Enter the third number (for multiplication only): ";
  cin >> num3;
  cout << "Enter the operation (+, -, *, /): ";
  cin >> operation;

  // Call the appropriate function based on the operation
  double result;
  switch (operation) {
    case '+':
      result = add(num1, num2);
      break;
    case '-':
      result = subtract(num1, num2);
      break;
    case '*':
      result = multiply(num1, num2, num3);
      break;
    case '/':
      result = divide(num1, num2);
      break;
    default:
      cout << "Invalid operator" << endl;
      return 1;
  }

  cout << "The result is: " << result << endl;
  return 0;
}

// Function definitions
double add(double x, double y) {
  return x + y;}

double subtract(double x, double y) {
  return x - y;}

double multiply(double x, double y, double z) {
  return x * y * z;}

double divide(double x, double y) {
  return x / y;}