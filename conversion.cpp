#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

void conversionOutput(double origFeet, double origInches, double meters, double centimeters) {
  cout << "There are " << meters << " meters, " << centimeters << " centimeters in " << origFeet << " feet, " << origInches << " inches." << endl;
}

void feetToMeters(double feet, double inches) {
  double totalFeet = feet + (inches/12);
  double meters = 0.0;
  double centimeters = 0.0;

  meters = 0.3048*totalFeet;

  // Gets the number of centimeters
  if (meters != floor(meters)) {
    double decimalVal;
    decimalVal = meters-floor(meters);
    meters -= decimalVal;
    centimeters = decimalVal*100;
  }

  conversionOutput(feet, inches, meters, centimeters);
}

bool userInput() {
  double inputFeet = 0;
  double inputInches = 0;

  cout << "Enter a length in feet and inches to be converted: " << endl;
  cout << "Feet: ";
  cin >> inputFeet;
  cout << "Inches: ";
  cin >> inputInches;

  feetToMeters(inputFeet, inputInches);
}

int main(int argc, char ** argv) {
  bool continueLooping = true;
  char continueLoop = 'y';

  continueLooping = userInput();

  while (continueLooping == true) {
    cout << "Continue Looping? (y/n)" << endl;
    cin >> continueLoop;
    if (continueLoop == 'n') {
      continueLooping  = false;
      break;
    }
    userInput();

  }

  return 0;
}
