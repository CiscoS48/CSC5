//Francisco Salazar                CSC 5                  Chapter 5, P. 315, #1
//
/******************************************************************************
 * SUM OF NUMBERS
 *_____________________________________________________________________________
 * This program uses a loop then adds all the positive integer values up to the
 * positive integer that is entered. It does not accept negative integers.
 *
 * Computation is based on the formula:
 * SUM = 1+2+3+4+5+6... + integer where the integer is positive.
 *_____________________________________________________________________________
 * INPUT
 *  integer       : The positive integer put in by user.
 *  sum           : The sum of the integers up to the positive integer, including
 *                 the postive integer.
 *
 *****************************************************************************/
 #include <iostream>
 using namespace std;

 int main()

 {

  int integer;             // INPUT  - A positive integer put in by user.
  int sum = 0;             /* OUTPUT - The sum of the integers up to the positive
                                      integer, including the positive integer.*/
  int numInc = 0;          /* Coounts the sum and increments by one each
                             time to add to the integer*/


// Ask user for a positive integer.
  cout << "Enter a positive integer. ";

// Input the positive integer.
  cin >> integer;

  do
    {

      numInc++;
      sum = sum + numInc;

      if (integer < 0)
       {
         cout << "This is not a positive integer, restart the program and try";
         cout << " again.";
       }

     } while(numInc < integer);

  if (integer > 0)
    {
        cout << "The sum is " << sum;
    }

  return 0;

 }
