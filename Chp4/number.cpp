//Francisco Salazar                CSC 5                  Chapter 4, P. 234, #1
//
/******************************************************************************
 * DETERMINE WHICH NUMBER IS SMALLER AND WHICH NUMBER IS LARGER
 *_____________________________________________________________________________
 * This program determines, between two numbers, which is larger and which is
 * smaller.
 *
 * Determination is based on:
 * If first number is larger than second, first number equals larger and second
 * equals smaller.
 * If second number is larger than first, then second number
 * equals larger and first equals smaller.
 *_____________________________________________________________________________
 * INPUT
 *  firstNumber        : The first number.
 *  secondNumber       : The second number.
 *
 *****************************************************************************/
 #include <iostream>
 #include <iomanip>
 using namespace std;
 int main()
 {
   int firstNumber;        //INPUT - The first number.
   int secondNumber;       //INPUT - The second number.

//
// Ask user for first number.
  cout << "What is the first number? ";

// Input gallon capacity of vehicle.
  cin >> firstNumber;

// Ask user for secondNumber.
  cout << "What is the second number? ";

// Input miles driven on tank of gas.
  cin >> secondNumber;

// Determine larger number.
if (firstNumber > secondNumber) cout << "The first number, number " <<
  firstNumber << ", is larger.";
if (secondNumber > firstNumber) cout << "The second number, number " <<
  secondNumber << ", is larger." << endl;

//Determine smaller number.
if (firstNumber < secondNumber) cout << "The first number, number " <<
  firstNumber << ", is smaller.";
if (secondNumber < firstNumber) cout << "The second number, number " <<
  secondNumber << ", is smaller." << endl;


  return 0;

 }
