//Francisco Salazar                CSC 5                  Chapter 5, P. 315, #4
//
/******************************************************************************
 * CALORIES BURNED
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

  int calBurned = 0;      /*OUTPUT - The sum of the integers up to the positive
                              integer, including the positive integer.*/
  const float calPerMin = 3.9;
  int mins = 5;
  int count = 0;        //Counts the loops.



  while(mins < 30)
   {
      mins = mins + 5;

      calBurned = calPerMin * mins;
      cout << "The calories burned at " << mins << " minutes are ";
      cout << calBurned << endl;

    }

//cout << "The calories burned at " << mins << " are " << calBurned << endl;

  return 0;

 }
