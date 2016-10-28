#include <iostream>
using namespace std;

float getSales();
void findHighest(float, float, float, float);

int main()
  {
    int div1, div2, div3, div4;
    div1 = getSales(1);
    div2 = getSales(2);
    div3 = getSales(3);
    div4 = getSales(4);

    findHighest();
    return 0;
  }

float getSales(int name)
  {
    int input;

    do{
      cout << "Enter the sales figure for division "<< name << ": " ;

      cin >> input;
      if (input < 0 ) cout << "That is an invalid figure.";
      } while (input < 0);

  return input;
  }

void findHighest(float div1, float div2, float div3, float div4)
  {

    if (div1 > div2 && div1 > div3 && div1 > div4)
      cout << "Division 1 is the greatest.";
    if (div2 > div1 && div2 > div3 && div2 > div4)
      cout << "Division 2 is the greatest.";



  }
