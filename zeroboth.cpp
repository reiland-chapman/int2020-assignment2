#include <iostream>
using namespace std;

// zeroBoth Function
void zeroBoth(int& var1, int& var2) {
  var1 = 0;
  var2 = 0;
}

int main(int argc, char ** argv) {
  int num1 = 0;
  int num2 = 0;

  cout << "Enter 2 integers to set to zero" << endl << "Num 1: ";
  cin >> num1;
  cout << "Num 2: ";
  cin >> num2;
  cout << endl;

  zeroBoth(num1,num2);

  cout << "Running zeroBoth function" << endl;
  cout << "Num 1: " << num1 << endl << "Num 2: " << num2 << endl;
  
  return 0;
}
