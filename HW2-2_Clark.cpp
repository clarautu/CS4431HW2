//Autumn Clark
//Assignment 2-2
//Creates a pseudorandom number generator

#include <iostream>
#include <cmath>
using namespace std;

int const seed = 101101;
int lastNumReturned;
bool isFirstRun = true;
long int mod = pow(2,24);
long int period = 0;

//Function that returns the next random number from the LCG
long int randlcg(){
  long int pseudo;
  if(isFirstRun){
    pseudo = (61*seed + 1) % mod;
    isFirstRun = false;
  } else {
    pseudo = (61*lastNumReturned + 1) % mod;
  }
  lastNumReturned = pseudo;
  return pseudo;
}

//Function to normalize pseudorandom number to be between 0 and 1
float normalize(long pseudo){
  float norm = (double(pseudo)/double(mod));
  return norm;
}

int main() {
  int count = 0;
  cout << "30 pseudorandom numbers:\n";
  for(int i = 0; i < 30; i++){
    count++;
    cout << count << ": " << normalize(randlcg()) << "\n";
  }

  //The below code is to used to calculate the period of the LCG: 16,777,216
  /*
  float first = normalize(randlcg());
  cout << first << "\n";
  float next = 0;
  do {
    period++;
    next = normalize(randlcg());
    if (period == (mod + 1)){
      cout << "It overflowed. " << period << "\n";
    }
  } while (first != next);
  cout << "The period is: " << period;
  */
  
  return 0;
}
