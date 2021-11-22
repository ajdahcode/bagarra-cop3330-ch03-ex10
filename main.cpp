/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 alden bagarra
 */

#include <iostream>
using namespace std;

int main() {
  string operation;
  double firstOperand = 0;
  double secondOperand = 0;	

  // Prompt the user for the operation followed by two operands
  cout << "Enter an operation followed by two operands: ";
  
  while(cin >> operation >> firstOperand >> secondOperand) {
    double result = 0;
    // Checks the operation of the input and does the operation
    if (operation == "plus" || operation == "+") result = firstOperand+secondOperand;
    else if (operation == "minus" || operation == "-") result = firstOperand-secondOperand;
    else if (operation == "mul" || operation == "*") result = firstOperand*secondOperand;
    else if (operation == "div" || operation == "/") {
      // If the second operand is a 0 in division then it is undefined.
      if (secondOperand==0) cout << ("Undefined.");
      result = firstOperand/secondOperand;
    }
    // If it is an invalid operator
    else {
      cout << ("Invalid Operator\n");
      break;
    }

    // Print out the result 
    cout << firstOperand << " " << operation << " " << secondOperand << " == " << result <<'\n';
    break;
  }
} 