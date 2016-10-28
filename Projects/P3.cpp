/*
 * main.cpp
 *
 *  Created on: Oct 12, 2016
 *      Author: rcc
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

float CalcDiscount(int Month);

void GetSalesInfo(int& Accnt, int& Month, int& Day, int& Year, char& CoCode,
				  float& SaleAmt, int& ShipWeight);
void switchCounty(char& CoCode);



int main()
	{
		int 		Accnt 		=0;
		int 		Month 		=0;
		int 		Day 		=0;
		int 		Year 		=0;
		char 		CoCode 		=0;
		float 		SaleAmt 	=0;
		int			ShipWeight 	=0;
		float 		DiscountAmt;

	GetSalesInfo(Accnt, Month, Day, Year, CoCode, SaleAmt, ShipWeight);

	DiscountAmt = CalcDiscount(Month);

  cout << endl;
  cout << "ACCOUNT NUMBER" << setw(26) << "COUNTY" << endl;
  cout << setw(9) << Accnt;
  switchCounty(CoCode);

	}

void switchCounty(char& CoCode)
  {

    switch(CoCode)
    {
      case 'L':
      case 'l': cout << "Los Angeles County";
        break;

      case 'O':
      case 'o': cout << setw(41) << "Orange County";
        break;

      case 'S':
      case 's': cout << setw(36) << "San Diego County";
        break;

    }

  }

void GetSalesInfo(int& Accnt, int& Month, int& Day, int& Year,
		 	 	   char& CoCode, float& SaleAmt, int& ShipWeight)
	{
		cout << "Please Enter your Account Number: ";
		cin >> Accnt;
      if (Accnt < 1000 || Accnt > 9999);
        cout << "Not a valid Account Number!";
        exit(0);

		cout << "Please Enter the Sales Date." << endl;

		cout << "Enter Month: ";
		cin >> Month;

		cout << "Enter Day: ";
		cin >> Day;

		cout << "Enter Year: ";
		cin >> Year;

		cout << "Please Enter the County Code: ";
		cin >> CoCode;

		cout << "Please Enter the Sales Amount: ";
		cin >> SaleAmt;

		cout << "Please Enter the Weight: ";
		cin >> ShipWeight;

	}

 float CalcDiscount(int Month)
	{
	 float Discount = 0;

	 	 if (Month >=1 || Month <=5)
	 	 	 Discount = .05;
	 	 if (Month >=6 || Month <=8)
	 	 	 Discount = .10;
	 	 if (Month >=9 || Month <=12)
	 	 	 Discount = .15;
	 	 if (Month <=0 || Month >=13)
	 	 	 cout << "Invalid month";

	 return Discount;
	}
