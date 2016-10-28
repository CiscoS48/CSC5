#include <iostream>
using namespace std;

void calculateRetail(float, float);

int main()

  {
    float whlSleCost;
    float mrkUpPrc;

    cout << "Enter the items wholesale cost and its markup percentage. ";
    cin >> whlSleCost >> mrkUpPrc;

    if ( whlSleCost > 0 & mrkUpPrc > 0)

    calculateRetail(whlSleCost, mrkUpPrc);

    else

      cout << "That is not a valid number, try again.";
    return 0;

  }


 void calculateRetail(float value1, float value2)
  {
    cout << "Retail price is " << value1 + (value1 * (.01 * value2)) << ".";
  }
