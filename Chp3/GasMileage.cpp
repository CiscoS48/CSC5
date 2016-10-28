//Francisco Salazar                CSC 5                  Chapter 3, P. 151, #1
//
/******************************************************************************
 * COMPUTE GAS MILEAGE
 *_____________________________________________________________________________
 * This program computes the distance a car can travel on a gallon of gas based
 * on the gas tank capacity and the miles that can be driven on a tank of gas.
 *
 * Computation is based on the formula:
 * Miles per gallon = Miles driven on tank of gas / capacity of tank in gal.
 *_____________________________________________________________________________
 * INPUT
 *  tankCapacity    : Gas tank capacity in gallons
 *  tankMiles       : Miles driven on a tank of gas
 *
 * OUTPUT
 *  milesPerGal     : Miles driven on a gallon of gas
 *
 *****************************************************************************/
 #include <iostream>
 using namespace std;
 int main()
 {
   float tankCapacity;    //INPUT- Gas tank capacity in gallons
   float tankMiles;       //INPUT- Miles driven on a tank of gas
   float milesPerGal;     //Output- Distace car can travel on gallon of gas
//
// Ask user for tank capactiy.
  cout << "What is the gas capactiy of your vehicle in gallons? ";

// Input gallon capacity of vehicle.
  cin >> tankCapacity;

// Ask user for how many miles are driven on a tank of gas.
  cout << "How many miles are driven on a tank of gas? ";

// Input miles driven on tank of gas.
  cin >> tankMiles;

// Compute miles per gallon.
  milesPerGal = tankMiles / tankCapacity;

// Output average miles per gallon.
  cout << "The number of miles that can be driven per gallon of gas is "
  << milesPerGal << ".";


  return 0;

 }
 
