//Autumn Clark
//Assignment 2-1
//Calculate the volume of a washer with user-specified dimensions

#include <iostream>
#include <cmath>
using namespace std;

//Function that calulates the volume of a washer with the specified dimensions
double CompVol(double rad1, double rad2, double height) {
  double volume = M_PI*(rad1*rad1 - rad2*rad2)*height;
  return volume;
}

int main() {
  double rad1 = 0;
  double rad2 = 0;
  double height = 0;
  cout << "Calculate the volume of a washer.\nRadius of washer in mm: ";
  cin >> rad1;
  cout << "Radius of washer hole in mm: ";
  cin >> rad2;
  while (rad2 >= rad1) { //Check if rad2 is smaller than or equal to rad1; ask for a new rad2 if true
    rad2 = 0;
    cout << "Radius of washer hole must be smaller than the radius of washer.\nRadius of washer hole in mm: ";
    cin >> rad2;
  }
  cout << "Height of washer in mm: ";
  cin >> height;
  double volume = CompVol(rad1, rad2, height);
  cout << "The volume of your washer is: " << volume << " mm^3";
}
