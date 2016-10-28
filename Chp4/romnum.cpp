//Francisco Salazar                CSC 5                  Chapter 4, P. 234, #2
//
/******************************************************************************
 * DISPLAY ROMAN NUMERAL VERSION OF USER INPUTED NUMBER 1-10.
 *_____________________________________________________________________________
 * This program asks the user for a number one through ten then displays that
 * numbers roman numeral version.
 *
 * This program uses a switch to display the numer 1-10 as a roman numeral.
 *_____________________________________________________________________________
 * INPUT
 *  number       : The number, 1-10 to be switched to a roman numeral.
 *
 *****************************************************************************/
 #include <iostream>
 using namespace std;

 int main()
 {
  int number;      //INPUT - A number 1-10.

// Ask user for a number 1-10.
  cout << "Enter a number from 1 to 10. ";

// Input the number 1-10.
  cin >> number;
  switch (number)
    {
      case 1 : cout << "The Roman Numeral of 1 is I. ";
                break;
      case 2 : cout << "The Roman Numeral of 2 is II. ";
                break;
      case 3 : cout << "The Roman Numeral of 3 is III. ";
                break;
      case 4 : cout << "The Roman Numeral of 4 is IV. ";
                break;
      case 5 : cout << "The Roman Numeral of 5 is V. ";
                break;
      case 6 : cout << "The Roman Numeral of 6 is VI. ";
                break;
      case 7 : cout << "The Roman Numeral of 7 is VII. ";
                break;
      case 8 : cout << "The Roman Numeral of 8 is VIII. ";
                break;
      case 9 : cout << "The Roman Numeral of 9 is IX. ";
                break;
      case 10: cout << "The Roman Numeral of 10 is X. ";
                break;
      default: cout << "You did not enter a number 1-10. ";

    }


  return 0;

 }
