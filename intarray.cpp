#include <iostream>
using namespace std;

int main(int argc, char ** argv) {
  const int ARRAY_LENGTH = 10;
  int numberArray[ARRAY_LENGTH];

  cout << "Input 10 nonnegative integer numbers:" << endl;

  for(int i=0; i < ARRAY_LENGTH; ++i) {
    cout << "Num " << i+1 << ": ";
    cin >> numberArray[i];
  }

  cout << endl;
  cout << "Displaying numbers:" << endl;

  for(int i=0; i < ARRAY_LENGTH; ++i) {
    cout << "Num " << i+1 << ": " << numberArray[i] << endl;
  }

  return 0;
}
