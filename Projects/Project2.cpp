/********************************************************************
 * AUTHOR        : Francisco Salazar
 * PROJECT #2    : Repetition & Switch Statement
 * CLASS         : CSC5
 * SECTION       : MW 2:20PM-5:30PM
 * DUE DATE      : 10/03/16
 * ******************************************************************/

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/********************************************************************
 *
 * OBTAIN AND CONVERT LETTER GRADES TO GPA
 * __________________________________________________________________
 * This program obtains letter grades from the user, then outputs the
 * total grade points and the grade point average.
 *
 * Computations are based on sum of grade points, and total grade
 * points divided by total amount of grades.
 * __________________________________________________________________
 *
 *
 ********************************************************************/

int main()
{

  char 	inputChar;
  int 	ttlGrdPt 	= 0;
  int 	grdCt 		= 0;
  float grdPtAvg 	= 0;
  int 	loopCt 		= 0;



	const int  	 	   grdA = 4,
				           grdB = 3,
				           grdC = 2,
				           grdD = 1,
				           grdF = 0;

 do
 {
		cout << "TEST #" << loopCt+1 << ":" <<endl;
		cout << endl;
		ttlGrdPt = grdPtAvg = grdCt = 0;
   do
   {
	   cout << "       Enter Letter Grade (enter 'X' to exit): ";
	   cin >> inputChar;
	   switch (inputChar)
	   {
	   	   case 'A':
	   	   case 'a': ttlGrdPt += grdA;
              ++grdCt;
              break;
	   	   case 'B':
	   	   case 'b': ttlGrdPt += grdB;
              ++grdCt;
              break;
	   	   case 'C':
	   	   case 'c': ttlGrdPt += grdC;
              ++grdCt;
              break;
	   	   case 'D':
	   	   case 'd': ttlGrdPt += grdD;
              ++grdCt;
              break;
	   	   case 'F':
	   	   case 'f': ttlGrdPt += grdF;
              ++grdCt;
              break;
	   	   case 'X':
	   	   case 'x':
              break;
              cout << endl;

	   	   default:
	   		   cout << "\n" "       Invalid letter, please try again";
			     cout << endl;
	   		   cout << endl;

	   }
 } while ( inputChar != 'X' && inputChar != 'x');

if (grdCt > 0)
   {
    grdPtAvg = (float) ttlGrdPt / grdCt;

    cout << endl;

    cout << noshowpoint << setprecision(0);
    cout << "Total Grade Points: " << ttlGrdPt <<endl;

    cout << fixed << showpoint<< setprecision(2);
    cout << "GPA: " << grdPtAvg;

    cout << endl << endl << endl;
   }
  loopCt++;

 } while (loopCt < 3);



    return 0;

}
